#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_END.h"


// pointer.
    // classes.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = NULL;
    // registers.

// public.
    // constructor.

    // destructor.

    // dynamic.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::generate_Program()
    {
        std::cout << "entered CLIBLaunchEnableForConcurrentThreadsAtEND::generate_Program()" << std::endl;
        std::cout << "" << std::endl;
        stat_CLASS_create_ptr_Framework();
        stat_CLASS_get_ptr_Framework()->dyn_initialise(stat_CLASS_get_ptr_Framework());
        std::cout << "        ,     \\      /      ," << std::endl;
        std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
        std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
        std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
        std::cout << "|              |\\../|               |" << std::endl;
        std::cout << "|               \\VV/                |" << std::endl;
        std::cout << "|        MIT Launch Que .dll        |" << std::endl;
        std::cout << "|___________________________________|" << std::endl;
        std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
        std::cout << "|  /    V          ))        V   \\  |" << std::endl;
        std::cout << "|/                //               \\| " << std::endl;
        std::cout << "`                 V                 '" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "exiting CLIBLaunchEnableForConcurrentThreadsAtEND::generate_Program()" << std::endl;
        return (void*)stat_CLASS_get_ptr_Framework();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::terminate_Progaram()
    {
        delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::request_Wait_launch(void* obj, unsigned char* bytes)
    {
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj), (uint8_t)*bytes);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::thread_End(void* obj, unsigned char* bytes)
    {
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj), (uint8_t)*bytes);
    }
        // get.
    unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_coreId_To_launch(void* obj)
    {
        return (unsigned char*)OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Active(void* obj)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore((uint8_t)*bytes);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Idle(void* obj)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_State_launchBit(void* obj)
    {
        return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
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
        std::cout << "" << std::endl;
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework();
        while (stat_CLASS_get_ptr_Framework() == NULL) {}
        std::cout << "" << std::endl;
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
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool value)
    {
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore((uint8_t)&bytes, value);
    }