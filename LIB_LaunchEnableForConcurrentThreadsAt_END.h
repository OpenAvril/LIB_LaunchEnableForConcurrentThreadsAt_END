#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATEND_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
	{
		class LAUNCHENABLEFORCONCURRENTTHREADSATEND_API CLIBLaunchEnableForConcurrentThreadsAtEND
		{
		public:
			static void* generate_Program();
			static void terminate_Progaram();
			static void request_Wait_launch(void* obj, unsigned char* bytes);
			static void thread_End(void* obj, unsigned char* bytes);
			static unsigned char* get_coreId_To_launch(void* obj);
			static bool get_Flag_Active(void* obj);
			static bool get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes);
			static bool get_Flag_Idle(void* obj);
			static bool get_State_launchBit(void* obj);
			static void set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue);

		private:
			static void stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework();
			static void stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework();
			static class LaunchEnableForConcurrentThreadsAt_END_Framework* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework();
		};
	}
}