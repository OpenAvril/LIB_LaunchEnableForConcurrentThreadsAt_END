#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_END.h"


// pointer.
    // classes.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = NULL;
    // registers.

// public.
    // constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND()
    {

    }

    // destructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::~CLIBLaunchEnableForConcurrentThreadsAtEND()
    {

    }

    // dynamic.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::generate_Program()
    {
        stat_CLASS_create_ptr_Framework();
        stat_CLASS_get_ptr_Framework()->initialise(stat_CLASS_get_ptr_Framework());
        std::cout << "        ,     \\      /      ," << std::endl;
        std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
        std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
        std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
        std::cout << "|              |\\../|               |" << std::endl;
        std::cout << "|               \\VV/                |" << std::endl;
        std::cout << "|        MIT Write Que .dll         |" << std::endl;
        std::cout << "|___________________________________|" << std::endl;
        std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
        std::cout << "|  /    V          ))        V   \\  |" << std::endl;
        std::cout << "|/                //               \\| " << std::endl;
        std::cout << "`                 V                 '" << std::endl;
        return (void*)stat_CLASS_get_ptr_Framework();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::terminate_Progaram()
    {
        delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::request_Wait_launch(void* obj, unsigned char* bytes)
    {
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj), (uint8_t)*bytes);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::thread_End(void* obj, unsigned char* bytes)
    {
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj), (uint8_t)*bytes);
    }
        // get.
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_coreId_To_launch(void* obj)
    {
        return (unsigned char*)OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Active(void* obj)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore((uint8_t)*bytes);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Idle(void* obj)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_State_launchBit(void* obj)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0));
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
            // create.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_CLASS_create_ptr_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework();
        while (stat_CLASS_get_ptr_Framework() == NULL) {}
    }
            // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_CLASS_get_ptr_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
    }
            // set.
        // registers.
            // create.
            // get.
            // set.











// public.
    // dynamic.
        // get.
        // set.
    // static.

        // get.

        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool value)
    {
        uint8_t concurrentThreadID = *bytes;
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, value);
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.

        // get.

        // set.