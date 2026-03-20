#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END_Global
    {
    public:
        LaunchEnableForConcurrentThreadsAt_END_Global();
        ~LaunchEnableForConcurrentThreadsAt_END_Global();
        static void boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global();
        static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        static void boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global();
        void boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global();
        void boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        void boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Global();
        bool dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
        bool dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
        uint8_t dyn_REG_get_number_Implemented_Threads();
        static unsigned char* stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value);
        static uint8_t stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes);
        static class LaunchEnableForConcurrentThreadsAt_END_Framework* stat_CONVERT_Obj_To_ClassOf(void* obj);
    private:
        static std::array<bool, 3>* _stat_REG_ptr_flag_thread_2STATE;//NUMBER OF CONCURRENT THREADS.
        static uint8_t* _stat_REG_ptr_number_Implemented_Threads;
        static void stat_REG_boot1_DEFINE_flag_thread_2STATE();
        static void stat_REG_boot1_DEFINE_number_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE();
        static void stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_flag_thread_2STATE();
        static void stat_REG_boot3_INITIALISE_number_Implemented_Threads();
        static std::array<bool, 3>* stat_REG_get_ptr_flag_thread_2STATE();
        static uint8_t* stat_REG_get_ptr_number_Implemented_Threads();
        static void stat_REG_set_flag_thread_2STATE_ACTIVE(std::array<bool, 3>* bitArray);
        static void stat_REG_set_number_Implemented_Threads(uint8_t coreId);
    };
}
