#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_END.h"

// pointer.
    // classes.
    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = NULL;
    // registers.

// constructor.
    OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND()
    {
    }

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
    void* OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::create_Program()
    {
        stat_set_ptr_Framework(new class OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
        stat_get_ptr_Framework()->initialise(stat_get_ptr_Framework());
        return (void*)stat_get_ptr_Framework();
    }
    void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::request_Wait_launch(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrentThreadID);
    }
    void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::thread_End(OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrentThreadID);
    }
        // get.
    uint8_t OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
    }
    bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID);
    }
    bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
    }
    bool OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0));
    }
        // set.
    void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::set_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID, bool value)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, value);
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::create_ptr_Framework()
    {
        stat_set_ptr_Framework(new OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework());
        while (stat_get_ptr_Framework() == NULL) { }
    }
        // get.
    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_get_ptr_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
    }
        // set.
    void OpenAvrilLIB::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_set_ptr_Framework(LaunchEnableForConcurrentThreadsAt_END_Framework* newClass)
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = newClass;
    }