#include "pch.h"
// pointers.
    // classes.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global* _ptr_Global = NULL;
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control* _ptr_LaunchConcurrency_Control = NULL;
    // registers.

// constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::LaunchEnableForConcurrentThreadsAt_END()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::~LaunchEnableForConcurrentThreadsAt_END()
    {
        delete _ptr_Global;
        delete _ptr_LaunchConcurrency_Control;
    }

// public.
    // dynamic.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::initialise_Control(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        obj->get_ptr_LaunchConcurrency()->create_ptr_LaunchConcurrency_Control(obj);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Request(obj, concurrentThreadID);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Activate(obj);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        while (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_flag_praisinglaunch() == true)
        {

        }
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_new_concurrentCycle_Try_CoreId_Index());
        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE());
        }
        else
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() + 1);

            if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
            }
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
            obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrentThreadID);
        }
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::get_ptr_Global()
    {
        return stat_get_ptr_Global();
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::get_ptr_LaunchConcurrency_Control()
    {
        return stat_get_ptr_LaunchConcurrency_Control();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
    
        // get.
        // set.
    // static.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::create_ptr_Global()
    {
        stat_set_ptr_Global(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global());
        while (stat_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::create_ptr_LaunchConcurrency_Control(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        stat_set_ptr_LaunchConcurrency_Control(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control());
        while (stat_get_ptr_LaunchConcurrency_Control() == NULL) {}
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_get_ptr_LaunchConcurrency_Control()
    {
        return _ptr_LaunchConcurrency_Control;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_set_ptr_Global(LaunchEnableForConcurrentThreadsAt_END_Global* newClass)
    {
        _ptr_Global = newClass;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_set_ptr_LaunchConcurrency_Control(LaunchEnableForConcurrentThreadsAt_END_Control* newClass)
    {
        _ptr_LaunchConcurrency_Control = newClass;
    }