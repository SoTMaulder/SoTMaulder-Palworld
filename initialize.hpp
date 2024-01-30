#pragma once
#include "config.h"
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"
using namespace DX11_Base;

//  please dont remove , this is useful for a variety of things
void ClientBGThread()
{
    while (g_Running)
    {
        //  test cache runners

        std::this_thread::sleep_for(1ms);
        std::this_thread::yield();
    }
}

DWORD WINAPI MainThread_Initialize()
{
    g_Console = std::make_unique<Console>();
#if DEBUG
    g_Console->InitializeConsole("Debug Console");
    g_Console->printdbg("ImGui Hook - Initializing . . .\n\n", Console::Colors::DEFAULT);
#endif
    ///  ESTABLISH GAME DATA   
    g_GameData = std::make_unique<GameData>();
    g_GameVariables = std::make_unique<GameVariables>();

    ///  CREATE WINDOW AND ESTABLISH HOOKS
    g_D3D11Window = std::make_unique<D3D11Window>();
    g_Hooking = std::make_unique<Hooking>();
    g_Menu = std::make_unique<Menu>();
    g_Hooking->Hook();

#if DEBUG
    g_Console->printdbg("Main::Initialized\nUWorld:\t0x%llX\n", Console::Colors::green, Config.gWorld);
#endif

    ///  RENDER LOOP
    g_Running = TRUE;

    std::thread WCMUpdate(ClientBGThread); // Initialize Loops Thread
    while (g_Running)
    {
        if (GetAsyncKeyState(VK_INSERT) & 1)
        {
            g_GameVariables->m_ShowMenu = !g_GameVariables->m_ShowMenu;
            g_GameVariables->m_ShowHud = !g_GameVariables->m_ShowMenu;

        }


        if (g_KillSwitch)
        {
            g_KillSwitch = false;
            g_Hooking->Unhook();
        }
    }

    ///  EXIT
    WCMUpdate.join(); // Exit Loops Thread
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}