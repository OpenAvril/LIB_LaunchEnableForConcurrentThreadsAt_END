#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END_Global
    {
    public:
        LaunchEnableForConcurrentThreadsAt_END_Global();
        ~LaunchEnableForConcurrentThreadsAt_END_Global();
        void dyn_initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag);
        void dyn_initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value);
        bool dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
        bool dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
        uint8_t dyn_REG_get_number_Implemented_Threads();
        static class LaunchEnableForConcurrentThreadsAt_END_Framework* stat_obj_get_ClassOf(void* obj);
    private:
        static bool* _stat_REG_ptr_flag_thread_2STATE;
        static uint8_t* _stat_REG_ptr_number_Implemented_Threads;
        static void stat_REG_create_flag_thread_STATE(bool* newDEFAULT_Flag);
        static void stat_REG_create_number_Implemented_Threads(uint8_t* newDEFAULT_Value);
        static uint8_t* stat_REG_get_number_Implemented_Threads();
        static bool* stat_REG_get_ptr_flag_thread_2STATE();
        static void stat_REG_set_flag_thread_2STATE_ACTIVE(bool value);
        static void stat_REG_set_number_Implemented_Threads(uint8_t coreId);
    };
}
