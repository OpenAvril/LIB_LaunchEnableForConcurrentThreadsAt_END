// LIB_LaunchEnableForConcurrentThreadsAt_END.cpp : Defines the exported functions for the DLL.
#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_END.h"

class OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* ptr_LaunchEnableForConcurrentThreadsAt_END_Framework = NULL;



OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND()
{
}

// This is an example of an exported function.
void* OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::create_Program()
{
    set_ptr_Framework(new class OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework());
    while (get_ptr_Framework() == NULL) {}
    get_ptr_Framework()->initialise(get_ptr_Framework());
    return (void*)get_ptr_Framework();
}

void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::request_Wait_launch(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId)
{
    obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrent_CoreId);
}

void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::thread_End(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId)
{
    obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrent_CoreId);
}

uint8_t OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_coreId_To_launch(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
}

bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Active(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
}

bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_ConcurrentCoreState(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId);
}

bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Idle(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
}

bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_State_launchBit(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(0);
}

void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::set_state_ConcurrentCore(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId, bool value)
{
    obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId, value);
}

OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_ptr_Framework()
{
    return ptr_LaunchEnableForConcurrentThreadsAt_END_Framework;
}

void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::set_ptr_Framework(class OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* framework)
{
    ptr_LaunchEnableForConcurrentThreadsAt_END_Framework = framework;
}
