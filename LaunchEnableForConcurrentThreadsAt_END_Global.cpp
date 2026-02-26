#include "pch.h"

// pointers.
    // classes.
    // registers.
    bool* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::_ptr_flag_core_ACTIVE = NULL;
    bool* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::_ptr_flag_core_IDLE = NULL;
    uint8_t* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::_ptr_number_Implemented_Threads = NULL;

// constructor.
    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::LaunchEnableForConcurrentThreadsAt_END_Global()
    {
        bool* newDEFAULT_Flag = new bool(false);
        create_flag_core_ACTIVE(newDEFAULT_Flag);
        create_flag_core_IDLE(newDEFAULT_Flag);
        delete newDEFAULT_Flag;
        uint8_t* newDEFAULT_Value = new uint8_t(INT8_MAX);
        create_number_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

// destructor.
    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::~LaunchEnableForConcurrentThreadsAt_END_Global()
    {
        delete _ptr_flag_core_ACTIVE;
        delete _ptr_flag_core_IDLE;
        delete _ptr_number_Implemented_Threads;
    }

// public.
    // dynamic.
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag)
    {
        stat_set_flag_core_ACTIVE(*newINISIALISED_Flag);
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::initialise_flag_core_IDLE(bool* newINISIALISED_Flag)
    {
        stat_set_flag_core_IDLE(*newINISIALISED_Flag);
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value)
    {
        stat_set_number_Implemented_Threads(*newINISIALISED_Value);
    }
        // get.
    bool OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_flag_core_ACTIVE()
    {
        return *stat_get_ptr_flag_core_ACTIVE();
    }
    bool OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_flag_core_IDLE()
    {
        return *stat_get_ptr_flag_core_IDLE();
    }
    uint8_t OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_number_Implemented_Threads()
    {
        return *stat_get_ptr_number_Implemented_Threads();
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
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::create_flag_core_ACTIVE(bool* newDEFAULT_Flag)
    {
        bool* _ptr_flag_core_ACTIVE = new bool(true);
        while (stat_get_ptr_flag_core_ACTIVE() == NULL) {}
        stat_set_flag_core_ACTIVE(*newDEFAULT_Flag);
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::create_flag_core_IDLE(bool* newDEFAULT_Flag)
    {
        bool* _ptr_flag_core_IDLE = new bool(true);
        while (stat_get_ptr_flag_core_IDLE() == NULL) {}
        stat_set_flag_core_IDLE(*newDEFAULT_Flag);
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::create_number_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        uint8_t* _ptr_number_Implemented_Threads = new uint8_t(UINT_MAX);
        while (stat_get_ptr_number_Implemented_Threads() == NULL) {}
        stat_set_number_Implemented_Threads(*newDEFAULT_Value);
        
    }
        // get.
    bool* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::stat_get_ptr_flag_core_ACTIVE()
    {
        return _ptr_flag_core_ACTIVE;
    }
    bool* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::stat_get_ptr_flag_core_IDLE()
    {
        return _ptr_flag_core_IDLE;
    }
    uint8_t* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::stat_get_ptr_number_Implemented_Threads()
    {
        return _ptr_number_Implemented_Threads;
    }
        // set.
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::stat_set_flag_core_ACTIVE(bool flag_core_ACTIVE)
    {
        *_ptr_flag_core_ACTIVE = flag_core_ACTIVE;
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::stat_set_flag_core_IDLE(bool flag_core_IDLE)
    {
        *_ptr_flag_core_IDLE = flag_core_IDLE;
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::stat_set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
    {
        *_ptr_number_Implemented_Threads = number_Implemented_Threads;
    }