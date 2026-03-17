#include "pch.h"

// pointers.
    // classes.
    // registers.
bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::_stat_REG_ptr_flag_thread_2STATE = NULL;//1=ACTIVE, 0=IDLE.
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::_stat_REG_ptr_number_Implemented_Threads = NULL;

// public.
    // constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::LaunchEnableForConcurrentThreadsAt_END_Global()
    {
        std::cout << "entered CONSTRUCTOR LaunchEnableForConcurrentThreadsAt_END_Global()" << std::endl;
        bool* newDEFAULT_Flag = new bool(true);
        while (newDEFAULT_Flag == NULL) {}
        stat_REG_create_flag_thread_STATE(newDEFAULT_Flag);
        delete newDEFAULT_Flag;
        uint8_t* newDEFAULT_Value = new uint8_t(INT8_MAX);
        while (newDEFAULT_Value == NULL) {}
        stat_REG_create_number_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
        std::cout << "entered CONSTRUCTOR LaunchEnableForConcurrentThreadsAt_END_Global()" << std::endl;
    }

    // destructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::~LaunchEnableForConcurrentThreadsAt_END_Global()
    {
        delete _stat_REG_ptr_flag_thread_2STATE;
        delete _stat_REG_ptr_number_Implemented_Threads;
    }

    // dynamic.
        // create.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::dyn_initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag)
    {
        stat_REG_set_flag_thread_2STATE_ACTIVE(*newINISIALISED_Flag);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::dyn_initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value)
    {
        stat_REG_set_number_Implemented_Threads(*newINISIALISED_Value);
    }
        // get.
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE()
    {
        return *stat_REG_get_ptr_flag_thread_2STATE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::dyn_REG_get_ptr_flag_thread_2STATE_IDLE()
    {
        return !*stat_REG_get_ptr_flag_thread_2STATE();
    }
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::dyn_REG_get_number_Implemented_Threads()
    {
        return *stat_REG_get_number_Implemented_Threads();
    }
        // set.
    // static.
        // create.
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_obj_get_ClassOf(void* obj)
    {
        return reinterpret_cast<OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework*>(obj);
    }
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
            // get.
            // set.
        // registers.
            // create.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_REG_create_flag_thread_STATE(bool* newDEFAULT_Flag)
    {
        std::cout << "enterred stat_REG_create_flag_thread_STATE()" << std::endl;
        _stat_REG_ptr_flag_thread_2STATE = new bool(NULL);
        while (stat_REG_get_ptr_flag_thread_2STATE() == NULL) {}
        *_stat_REG_ptr_flag_thread_2STATE = *newDEFAULT_Flag;
        std::cout << "exiting stat_REG_create_flag_thread_STATE()" << std::endl;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_REG_create_number_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        std::cout << "enterred stat_REG_create_number_Implemented_Threads()" << std::endl;
        _stat_REG_ptr_number_Implemented_Threads = new uint8_t(NULL);
        while (stat_REG_get_number_Implemented_Threads() == NULL) {}
        *_stat_REG_ptr_number_Implemented_Threads = *newDEFAULT_Value;
        std::cout << "exiting stat_REG_create_number_Implemented_Threads()" << std::endl;
    }
            // get.
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_REG_get_number_Implemented_Threads()
    {
        return _stat_REG_ptr_number_Implemented_Threads;
    }
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_REG_get_ptr_flag_thread_2STATE()
    {
        return _stat_REG_ptr_flag_thread_2STATE;
    }
            // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_REG_set_flag_thread_2STATE_ACTIVE(bool flag_coreSTATE_Id)
    {
        *_stat_REG_ptr_flag_thread_2STATE = flag_coreSTATE_Id;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_REG_set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
    {
        *_stat_REG_ptr_number_Implemented_Threads = number_Implemented_Threads;
    }
