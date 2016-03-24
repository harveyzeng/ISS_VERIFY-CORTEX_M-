

int main(void)
{
    asm(" ldr     r3, =0x12ff5678");
    asm("ldr     r4, =0xb6231452");
    asm("ldr     r5, =0x35678234");
    asm("ldr     r6, =0x00000034");
   asm("ldr     r7, =0x7fffffff");
    asm("ldr     r8, =0x80008000");
  //  asm(" ldr     r3, =0xffffffff");
  //  asm("ldr     r4, =0xffffffff");
  //  asm("ldr     r5, =0xffffffff");
  //  asm("ldr     r6, =0xffffffff");
  //     asm("smlal r6,r3,r4,r5 ")     ;
 //   asm("smlawb r6,r3,r4,r5 ")     ;
   // asm("UQASX r6,r3,r4 ")     ;
 //asm("smlabb r6,r3,r4,r5 ")     ;
 // asm("smlabt r6,r3,r4,r5 ")     ;
 //  asm("smlatt r6,r3,r4,r5 ")     ;
 //   asm("smlatb r6,r3,r4,r5 ")     ;
 //    asm("smulbb r6,r3,r4 ")     ;
 // asm("smulbt r6,r3,r4 ")     ;
 //  asm("smultt r6,r3,r4 ")     ;
 //   asm("smultb r6,r3,r4 ")     ;
    //   asm("smlad r6,r3,r4,r5 ")     ;
    //asm("smladx r6,r3,r4,r5 ")     ;
  //  asm("VMOV.F32   s0,s12")     ;
 //   asm("smulwb r0,r1,r2   ");
           //asm("smuad r6,r3,r4 ")     ;
    //asm("smuadx r6,r3,r4 ")     ;
             //  asm("smusd r6,r3,r4 ")     ;
  //  asm("smusdx r6,r3,r4 ")     ;
    //      asm("smlsd r6,r3,r4,r5 ")     ;
   // asm("smlsdx r6,r3,r4,r5 ")     ;
  //                 asm("smmul r6,r3,r4 ")     ;
 //   asm("smmulr r6,r3,r4 ")     ;
  //        asm("smmla r6,r3,r4,r5 ")     ;
  //  asm("smmlar r6,r3,r4,r5 ")     ;
           //   asm("smmls r6,r3,r4,r5 ")     ;
   // asm("smmlsr r6,r3,r4,r5 ")     ;
 //                 asm("usad8 r6,r3,r4 ")     ;
 //   asm("usada8 r6,r3,r4,r5 ")     ;
 //                      asm("SMLALBB r6,r3,r4,r5 ")     ;
 //         asm("SMLALBT r6,r3,r4,r5 ")     ;
 //          asm("SMLALTB r6,r3,r4,r5 ")     ;
 // asm("SMLALTT r6,r3,r4,r5 ")     ;
 //            asm("SMLALD r6,r3,r4,r5 ")     ;
 // asm("SMLALDX r6,r3,r4,r5 ")     ;  
 //                asm("SMLSLD r6,r3,r4,r5 ")     ;
 // asm("SMLSLDX r6,r3,r4,r5 ")     ;  
     // asm("umaal r6,r3,r4,r5 ")     ;  
// asm("pkhbt r6,r3,r4, lsl #12")     ; 

// asm("pkhtb r6,r3,r4, asr #16")     ; 
// asm("usat r6,#30,r3")     ;
// asm("usat r6,#8,r3")     ;
//  asm("usat16 r8,#5,r6")     ;
// asm("usat16 r8,#8,r6")     ;
//  asm("usat16 r6,#5,r3")     ;
// asm("usat16 r6,#8,r3")     ; 
//  asm("sxtah r6,r4,r3,ror 8")     ; 
//  asm("sxtah r6,r7,r3,ror 8")     ; 
//  asm("uxtah r6,r4,r3,ror 8")     ; 
//  asm("uxtah r6,r7,r3,ror 8")     ; 
// asm("sxtab r6,r4,r3,ror 8")     ; 
// asm("sxtab r6,r7,r3,ror 8")     ; 
// asm("uxtab r6,r4,r3,ror 8")     ; 
// asm("uxtab r6,r7,r3,ror 8")     ; 
// asm("sxtab16 r6,r4,r3,ror 8")     ; 
// asm("sxtab16 r6,r7,r3,ror 8")     ; 
// asm("uxtab16 r6,r4,r3,ror 8")     ; 
// asm("uxtab16 r6,r7,r3,ror 8")     ; 
// asm("sxtb16 r6,r4,ror 8")     ; 
// asm("sxtb16 r6,r7,ror 8")     ; 
// asm("uxtb16 r6,r4,ror 8")     ; 
// asm("uxtb16 r6,r7,ror 8")     ; 
// asm("sadd16 r6,r3,r4")     ; 
// asm("qadd16 r6,r3,r4")     ; 
// asm("shadd16 r6,r3,r4")     ; 
// asm("sadd16 r6,r7,r8")     ; 
// asm("qadd16 r6,r7,r8")     ; 
// asm("shadd16 r6,r7,r8")     ; 

// asm("sasx r6,r3,r4")     ; 
// asm("qasx r6,r3,r4")     ; 
// asm("shasx r6,r3,r4")     ; 
// asm("sasx r6,r7,r8")     ; 
// asm("qasx r6,r7,r8")     ; 
// asm("shasx r6,r7,r8")     ; 


asm("ssax r6,r3,r4")     ; 
asm("qsax r6,r3,r4")     ; 
asm("shsax r6,r3,r4")     ; 
asm("ssax r6,r7,r8")     ; 
asm("qsax r6,r7,r8")     ; 
asm("shsax r6,r7,r8")     ; 

asm("ssub16 r6,r3,r4")     ; 
asm("qsub16 r6,r3,r4")     ; 
asm("shsub16 r6,r3,r4")     ; 
asm("ssub16 r6,r7,r8")     ; 
asm("qsub16 r6,r7,r8")     ; 
asm("shsub16 r6,r7,r8")     ; 

asm("sadd8 r6,r3,r4")     ; 
asm("qadd8 r6,r3,r4")     ; 
asm("shadd8 r6,r3,r4")     ; 
asm("sadd8 r6,r7,r8")     ; 
asm("qadd8 r6,r7,r8")     ; 
asm("shadd8 r6,r7,r8")     ; 

asm("ssub8 r6,r3,r4")     ; 
asm("qsub8 r6,r3,r4")     ; 
asm("shsub8 r6,r3,r4")     ; 
asm("ssub8 r6,r7,r8")     ; 
asm("qsub8 r6,r7,r8")     ; 
asm("shsub8 r6,r7,r8")     ; 
    asm("wfi");
 //   asm("smlawb r6,r3,r4,r5 ")     ;
 //  asm(" smlawt r6,r3,r4,r5 ")    ;
  //  asm(" smulwt r0, r1, r2") ;
}
