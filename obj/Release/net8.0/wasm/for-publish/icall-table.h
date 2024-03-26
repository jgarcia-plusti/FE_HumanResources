#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
231,
243,
244,
245,
246,
247,
248,
249,
250,
251,
254,
255,
256,
429,
430,
431,
460,
461,
462,
482,
483,
484,
485,
602,
603,
604,
607,
646,
647,
648,
651,
653,
655,
657,
662,
670,
671,
672,
673,
674,
675,
676,
677,
678,
679,
680,
681,
682,
683,
684,
685,
686,
688,
689,
690,
691,
692,
693,
694,
788,
789,
790,
791,
792,
793,
794,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
806,
807,
808,
809,
810,
811,
812,
879,
880,
949,
956,
959,
961,
966,
967,
969,
970,
974,
975,
977,
979,
980,
983,
984,
985,
988,
990,
993,
995,
997,
1006,
1073,
1075,
1077,
1087,
1088,
1089,
1090,
1092,
1099,
1100,
1101,
1102,
1103,
1111,
1112,
1113,
1117,
1118,
1120,
1124,
1125,
1126,
1410,
1603,
1604,
9732,
9733,
9735,
9736,
9737,
9738,
9739,
9741,
9743,
9745,
9746,
9757,
9759,
9764,
9766,
9768,
9770,
9821,
9822,
9824,
9825,
9826,
9827,
9828,
9830,
9832,
10907,
10911,
10913,
10914,
10915,
10916,
11179,
11180,
11181,
11182,
11200,
11201,
11202,
11204,
11247,
11325,
11327,
11329,
11338,
11339,
11340,
11341,
11342,
11802,
11803,
11808,
11809,
11844,
11872,
11879,
11886,
11897,
11901,
11926,
12006,
12008,
12019,
12021,
12022,
12023,
12030,
12044,
12064,
12065,
12073,
12075,
12082,
12083,
12086,
12088,
12093,
12099,
12100,
12107,
12109,
12121,
12124,
12125,
12126,
12137,
12146,
12152,
12153,
12154,
12156,
12157,
12174,
12176,
12190,
12212,
12213,
12214,
12239,
12244,
12274,
12275,
12832,
12853,
12948,
12949,
13212,
13213,
13221,
13222,
13223,
13229,
13338,
13891,
13892,
14445,
14446,
14451,
14461,
15392,
15413,
15415,
15417,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 231,
ves_icall_System_Array_InternalCreate,
// token 243,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 244,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 245,
ves_icall_System_Array_CanChangePrimitive,
// token 246,
ves_icall_System_Array_FastCopy,
// token 247,
ves_icall_System_Array_GetLengthInternal_raw,
// token 248,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 249,
ves_icall_System_Array_GetGenericValue_icall,
// token 250,
ves_icall_System_Array_GetValueImpl_raw,
// token 251,
ves_icall_System_Array_SetGenericValue_icall,
// token 254,
ves_icall_System_Array_SetValueImpl_raw,
// token 255,
ves_icall_System_Array_InitializeInternal_raw,
// token 256,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 429,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 430,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 431,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 460,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 461,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 462,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 482,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 483,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 484,
ves_icall_System_Enum_InternalGetCorElementType,
// token 485,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 602,
ves_icall_System_Environment_get_ProcessorCount,
// token 603,
ves_icall_System_Environment_get_TickCount,
// token 604,
ves_icall_System_Environment_get_TickCount64,
// token 607,
ves_icall_System_Environment_FailFast_raw,
// token 646,
ves_icall_System_GC_GetCollectionCount,
// token 647,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 648,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 651,
ves_icall_System_GC_SuppressFinalize_raw,
// token 653,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 655,
ves_icall_System_GC_GetGCMemoryInfo,
// token 657,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 662,
ves_icall_System_Object_MemberwiseClone_raw,
// token 670,
ves_icall_System_Math_Acos,
// token 671,
ves_icall_System_Math_Acosh,
// token 672,
ves_icall_System_Math_Asin,
// token 673,
ves_icall_System_Math_Asinh,
// token 674,
ves_icall_System_Math_Atan,
// token 675,
ves_icall_System_Math_Atan2,
// token 676,
ves_icall_System_Math_Atanh,
// token 677,
ves_icall_System_Math_Cbrt,
// token 678,
ves_icall_System_Math_Ceiling,
// token 679,
ves_icall_System_Math_Cos,
// token 680,
ves_icall_System_Math_Cosh,
// token 681,
ves_icall_System_Math_Exp,
// token 682,
ves_icall_System_Math_Floor,
// token 683,
ves_icall_System_Math_Log,
// token 684,
ves_icall_System_Math_Log10,
// token 685,
ves_icall_System_Math_Pow,
// token 686,
ves_icall_System_Math_Sin,
// token 688,
ves_icall_System_Math_Sinh,
// token 689,
ves_icall_System_Math_Sqrt,
// token 690,
ves_icall_System_Math_Tan,
// token 691,
ves_icall_System_Math_Tanh,
// token 692,
ves_icall_System_Math_FusedMultiplyAdd,
// token 693,
ves_icall_System_Math_Log2,
// token 694,
ves_icall_System_Math_ModF,
// token 788,
ves_icall_System_MathF_Acos,
// token 789,
ves_icall_System_MathF_Acosh,
// token 790,
ves_icall_System_MathF_Asin,
// token 791,
ves_icall_System_MathF_Asinh,
// token 792,
ves_icall_System_MathF_Atan,
// token 793,
ves_icall_System_MathF_Atan2,
// token 794,
ves_icall_System_MathF_Atanh,
// token 795,
ves_icall_System_MathF_Cbrt,
// token 796,
ves_icall_System_MathF_Ceiling,
// token 797,
ves_icall_System_MathF_Cos,
// token 798,
ves_icall_System_MathF_Cosh,
// token 799,
ves_icall_System_MathF_Exp,
// token 800,
ves_icall_System_MathF_Floor,
// token 801,
ves_icall_System_MathF_Log,
// token 802,
ves_icall_System_MathF_Log10,
// token 803,
ves_icall_System_MathF_Pow,
// token 804,
ves_icall_System_MathF_Sin,
// token 806,
ves_icall_System_MathF_Sinh,
// token 807,
ves_icall_System_MathF_Sqrt,
// token 808,
ves_icall_System_MathF_Tan,
// token 809,
ves_icall_System_MathF_Tanh,
// token 810,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 811,
ves_icall_System_MathF_Log2,
// token 812,
ves_icall_System_MathF_ModF,
// token 879,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 880,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 949,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 956,
ves_icall_RuntimeType_make_array_type_raw,
// token 959,
ves_icall_RuntimeType_make_byref_type_raw,
// token 961,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 966,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 967,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 969,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 970,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 974,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 975,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 977,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 979,
ves_icall_System_RuntimeType_getFullName_raw,
// token 980,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 983,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 984,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 985,
ves_icall_RuntimeType_GetFields_native_raw,
// token 988,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 990,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 993,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 995,
ves_icall_RuntimeType_GetName_raw,
// token 997,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1006,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1073,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1075,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1077,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1087,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1088,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1089,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1090,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1092,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1099,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1100,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1101,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1102,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1103,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1111,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1112,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1113,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1117,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1118,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1120,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1124,
ves_icall_System_String_FastAllocateString_raw,
// token 1125,
ves_icall_System_String_InternalIsInterned_raw,
// token 1126,
ves_icall_System_String_InternalIntern_raw,
// token 1410,
ves_icall_System_Type_internal_from_handle_raw,
// token 1603,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1604,
ves_icall_System_ValueType_Equals_raw,
// token 9732,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 9733,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 9735,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 9736,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 9737,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 9738,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 9739,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 9741,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 9743,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 9745,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 9746,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 9757,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 9759,
mono_monitor_exit_icall_raw,
// token 9764,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 9766,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 9768,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 9770,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 9821,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 9822,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 9824,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 9825,
ves_icall_System_Threading_Thread_GetState_raw,
// token 9826,
ves_icall_System_Threading_Thread_SetState_raw,
// token 9827,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 9828,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 9830,
ves_icall_System_Threading_Thread_YieldInternal,
// token 9832,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 10907,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 10911,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 10913,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 10914,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 10915,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 10916,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11179,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11180,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11181,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11182,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11200,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11201,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11202,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11204,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 11247,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11325,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11327,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 11329,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11338,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11339,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11340,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11341,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11342,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 11802,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 11803,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 11808,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 11809,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 11844,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 11872,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 11879,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 11886,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 11897,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 11901,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 11926,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12006,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12008,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12019,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12021,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12022,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12023,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12030,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12044,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12064,
ves_icall_reflection_get_token_raw,
// token 12065,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12073,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12075,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12082,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12083,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12086,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12088,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12093,
ves_icall_reflection_get_token_raw,
// token 12099,
ves_icall_get_method_info_raw,
// token 12100,
ves_icall_get_method_attributes,
// token 12107,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12109,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12121,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12124,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 12125,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 12126,
ves_icall_reflection_get_token_raw,
// token 12137,
ves_icall_InternalInvoke_raw,
// token 12146,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 12152,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 12153,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 12154,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 12156,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 12157,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12174,
ves_icall_InvokeClassConstructor_raw,
// token 12176,
ves_icall_InternalInvoke_raw,
// token 12190,
ves_icall_reflection_get_token_raw,
// token 12212,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 12213,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12214,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12239,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12244,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12274,
ves_icall_reflection_get_token_raw,
// token 12275,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 12832,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 12853,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 12948,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 12949,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 13212,
ves_icall_ModuleBuilder_basic_init_raw,
// token 13213,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 13221,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 13222,
ves_icall_ModuleBuilder_getToken_raw,
// token 13223,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 13229,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13338,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 13891,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 13892,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 14445,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 14446,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14451,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 14461,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 15392,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 15413,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 15415,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 15417,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
};
