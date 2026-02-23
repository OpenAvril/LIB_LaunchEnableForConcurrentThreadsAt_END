#pragma once

namespace OpenAvrilLIB
{
    class launchEnableForConcurrentThreadsAt_END_Global
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        launchEnableForConcurrentThreadsAt_END_Global();

// destructor.
        ~launchEnableForConcurrentThreadsAt_END_Global();

// public.
        void initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag);
        void initialise_flag_core_IDLE(bool* newINISIALISED_Flag);
        void initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value);
    // get.
        bool get_flag_core_ACTIVE();
        bool get_flag_core_IDLE();
        uint8_t get_number_Implemented_Threads();
    // set.

    private:
// private.
        void create_flag_core_ACTIVE(bool* newDEFAULT_Flag);
        void create_flag_core_IDLE(bool* newDEFAULT_Flag);
        void create_number_Implemented_Threads(uint8_t* newDEFAULT_Value);

    // get.
    // set.
        void set_flag_core_ACTIVE(bool value);
        void set_flag_core_IDLE(bool value);
        void set_number_Implemented_Threads(uint8_t coreId);
    };
}
