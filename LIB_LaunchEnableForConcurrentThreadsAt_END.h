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
// public.
	// constructor.

	// destructor.

	// dynamic.
		// get.
		// set.
	// static.
			static void* generate_Program();
			static void terminate_Progaram();
			static void request_Wait_launch(void* obj, unsigned char* bytes);
			static void thread_End(void* obj, unsigned char* bytes);
		// get.
			static unsigned char* get_coreId_To_launch(void* obj);
			static bool get_Flag_Active(void* obj);
			static bool get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes);
			static bool get_Flag_Idle(void* obj);
			static bool get_State_launchBit(void* obj);
		// set.
			static void set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue);

		private:
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
			static void stat_CLASS_create_ptr_Framework();
			// get.
			static LaunchEnableForConcurrentThreadsAt_END_Framework* stat_CLASS_get_ptr_Framework();
			// set.
		// registers.
			// create.
			// get.
			// set.
		};
	}
}