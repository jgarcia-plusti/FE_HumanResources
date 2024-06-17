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
805,
807,
808,
809,
810,
811,
812,
813,
880,
881,
950,
957,
960,
962,
967,
968,
970,
971,
975,
976,
978,
980,
981,
984,
985,
986,
989,
991,
994,
996,
998,
1007,
1074,
1076,
1078,
1088,
1089,
1090,
1091,
1093,
1100,
1101,
1102,
1103,
1104,
1112,
1113,
1114,
1118,
1119,
1121,
1125,
1126,
1127,
1411,
1604,
1605,
9734,
9735,
9737,
9738,
9739,
9740,
9741,
9743,
9745,
9747,
9748,
9759,
9761,
9766,
9768,
9770,
9772,
9823,
9824,
9826,
9827,
9828,
9829,
9830,
9832,
9834,
10910,
10914,
10916,
10917,
10918,
10919,
11182,
11183,
11184,
11185,
11203,
11204,
11205,
11207,
11250,
11328,
11330,
11332,
11341,
11342,
11343,
11344,
11345,
11805,
11806,
11811,
11812,
11847,
11875,
11882,
11889,
11900,
11904,
11929,
12009,
12011,
12022,
12024,
12025,
12026,
12033,
12047,
12067,
12068,
12076,
12078,
12085,
12086,
12089,
12091,
12096,
12102,
12103,
12110,
12112,
12124,
12127,
12128,
12129,
12140,
12149,
12155,
12156,
12157,
12159,
12160,
12177,
12179,
12193,
12215,
12216,
12217,
12242,
12247,
12277,
12278,
12835,
12856,
12951,
12952,
13215,
13216,
13224,
13225,
13226,
13232,
13341,
13896,
13897,
14450,
14451,
14456,
14466,
15397,
15418,
15420,
15422,
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
// token 789,
ves_icall_System_MathF_Acos,
// token 790,
ves_icall_System_MathF_Acosh,
// token 791,
ves_icall_System_MathF_Asin,
// token 792,
ves_icall_System_MathF_Asinh,
// token 793,
ves_icall_System_MathF_Atan,
// token 794,
ves_icall_System_MathF_Atan2,
// token 795,
ves_icall_System_MathF_Atanh,
// token 796,
ves_icall_System_MathF_Cbrt,
// token 797,
ves_icall_System_MathF_Ceiling,
// token 798,
ves_icall_System_MathF_Cos,
// token 799,
ves_icall_System_MathF_Cosh,
// token 800,
ves_icall_System_MathF_Exp,
// token 801,
ves_icall_System_MathF_Floor,
// token 802,
ves_icall_System_MathF_Log,
// token 803,
ves_icall_System_MathF_Log10,
// token 804,
ves_icall_System_MathF_Pow,
// token 805,
ves_icall_System_MathF_Sin,
// token 807,
ves_icall_System_MathF_Sinh,
// token 808,
ves_icall_System_MathF_Sqrt,
// token 809,
ves_icall_System_MathF_Tan,
// token 810,
ves_icall_System_MathF_Tanh,
// token 811,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 812,
ves_icall_System_MathF_Log2,
// token 813,
ves_icall_System_MathF_ModF,
// token 880,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 881,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 950,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 957,
ves_icall_RuntimeType_make_array_type_raw,
// token 960,
ves_icall_RuntimeType_make_byref_type_raw,
// token 962,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 967,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 968,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 970,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 971,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 975,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 976,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 978,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 980,
ves_icall_System_RuntimeType_getFullName_raw,
// token 981,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 984,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 985,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 986,
ves_icall_RuntimeType_GetFields_native_raw,
// token 989,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 991,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 994,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 996,
ves_icall_RuntimeType_GetName_raw,
// token 998,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1007,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1074,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1076,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1078,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1088,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1089,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1090,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1091,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1093,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1100,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1101,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1102,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1103,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1104,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1112,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1113,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1114,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1118,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1119,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1121,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1125,
ves_icall_System_String_FastAllocateString_raw,
// token 1126,
ves_icall_System_String_InternalIsInterned_raw,
// token 1127,
ves_icall_System_String_InternalIntern_raw,
// token 1411,
ves_icall_System_Type_internal_from_handle_raw,
// token 1604,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1605,
ves_icall_System_ValueType_Equals_raw,
// token 9734,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 9735,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 9737,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 9738,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 9739,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 9740,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 9741,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 9743,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 9745,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 9747,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 9748,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 9759,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 9761,
mono_monitor_exit_icall_raw,
// token 9766,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 9768,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 9770,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 9772,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 9823,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 9824,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 9826,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 9827,
ves_icall_System_Threading_Thread_GetState_raw,
// token 9828,
ves_icall_System_Threading_Thread_SetState_raw,
// token 9829,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 9830,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 9832,
ves_icall_System_Threading_Thread_YieldInternal,
// token 9834,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 10910,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 10914,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 10916,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 10917,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 10918,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 10919,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11182,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11183,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11184,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11185,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11203,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11204,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11205,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11207,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 11250,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11328,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11330,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 11332,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11341,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11342,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11343,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11344,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11345,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 11805,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 11806,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 11811,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 11812,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 11847,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 11875,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 11882,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 11889,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 11900,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 11904,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 11929,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12009,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12011,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12022,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12024,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12025,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12026,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12033,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12047,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12067,
ves_icall_reflection_get_token_raw,
// token 12068,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12076,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12078,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12085,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12086,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12089,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12091,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12096,
ves_icall_reflection_get_token_raw,
// token 12102,
ves_icall_get_method_info_raw,
// token 12103,
ves_icall_get_method_attributes,
// token 12110,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12112,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12124,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12127,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 12128,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 12129,
ves_icall_reflection_get_token_raw,
// token 12140,
ves_icall_InternalInvoke_raw,
// token 12149,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 12155,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 12156,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 12157,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 12159,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 12160,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12177,
ves_icall_InvokeClassConstructor_raw,
// token 12179,
ves_icall_InternalInvoke_raw,
// token 12193,
ves_icall_reflection_get_token_raw,
// token 12215,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 12216,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12217,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12242,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12247,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12277,
ves_icall_reflection_get_token_raw,
// token 12278,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 12835,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 12856,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 12951,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 12952,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 13215,
ves_icall_ModuleBuilder_basic_init_raw,
// token 13216,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 13224,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 13225,
ves_icall_ModuleBuilder_getToken_raw,
// token 13226,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 13232,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13341,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 13896,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 13897,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 14450,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 14451,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14456,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 14466,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 15397,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 15418,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 15420,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 15422,
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
