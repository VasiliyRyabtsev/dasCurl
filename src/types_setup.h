namespace das
{
    template <>
    struct cast<long> {
	     static __forceinline long to ( vec4f x ) { return v_extract_xi(v_cast_vec4i(x)); }
      	static __forceinline vec4f from ( long x ) { return v_cast_vec4f(v_splatsi(x)); }
    };
}
