/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_CHAR, toLowerAscii__pmRDqs9aWD4OvTyTVpsA9aKgcstrutils)(NIM_CHAR c);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI, nimCStrLen)(NCSTRING a);
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */

#line 544 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;

#line 546 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);	}
	goto LA1_;
	LA3_: ;
	{
#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 551 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 552 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}

#line 86 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 16 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
static N_INLINE(NIM_CHAR, toLowerAscii__pmRDqs9aWD4OvTyTVpsA9aKgcstrutils)(NIM_CHAR c) {	NIM_CHAR result;	nimfr_("toLowerAscii", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");{	result = (NIM_CHAR)0;
#line 17 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(17, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");	{		NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_4;
#line 17 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;

#line 18 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		nimln_(18, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");
#line 18 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 18 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 18 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		if (nimAddInt(((NU8)(c)), ((NI) 32), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_4)) { raiseOverflow(); goto BeforeRet_;};		if (((NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_4)) < ((NI) 0) || ((NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_4)) > ((NI) 255)){ raiseRangeErrorI((NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_4), ((NI) 0), ((NI) 255)); goto BeforeRet_;}		result = ((NIM_CHAR) (((NI) ((NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_4)))));	}
	goto LA1_;
	LA3_: ;
	{
#line 20 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		nimln_(20, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");		result = c;	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 414 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 415 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 60 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
N_LIB_PRIVATE N_NIMCALL(NI, csuCmpIgnoreStyle)(NCSTRING a, NCSTRING b) {	NI result;	NI i;	NI j;NIM_BOOL* nimErr_;	nimfr_("cmpIgnoreStyle", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");{nimErr_ = nimErrorFlag();	result = (NI)0;
#line 73 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(73, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");	i = ((NI) 0);
#line 74 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(74, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");	j = ((NI) 0);	{
#line 75 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		nimln_(75, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");		while (1) {			NIM_CHAR aa;			NIM_CHAR bb;			NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_5;			NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_6;			NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_7;			{
#line 76 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				nimln_(76, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");				while (1) {					NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_2;
#line 76 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA4;

#line 76 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
					if (nimAddInt(i, ((NI) 1), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_2)) { raiseOverflow(); goto BeforeRet_;};					i = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_2);				} LA4: ;
			}
			{
#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				nimln_(77, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");				while (1) {					NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_3;
#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA6;

#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
					if (nimAddInt(j, ((NI) 1), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_3)) { raiseOverflow(); goto BeforeRet_;};					j = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_3);				} LA6: ;
			}

#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(78, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			aa = toLowerAscii__pmRDqs9aWD4OvTyTVpsA9aKgcstrutils(a[i]);			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 79 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(79, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");
#line 79 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			bb = toLowerAscii__pmRDqs9aWD4OvTyTVpsA9aKgcstrutils(b[j]);			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 80 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(80, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");
#line 80 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 80 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 80 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			if (nimSubInt(((NU8)(aa)), ((NU8)(bb)), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_5)) { raiseOverflow(); goto BeforeRet_;};			result = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_5);
#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(81, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");			{				NIM_BOOL T9_;
#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				T9_ = (NIM_BOOL)0;
#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				T9_ = !((result == ((NI) 0)));				if (T9_) goto LA10_;

#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				T9_ = ((NU8)(aa) == (NU8)(0));				LA10_: ;
				if (!T9_) goto LA11_;

#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				goto LA1;
			}
			LA11_: ;

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(82, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");			if (nimAddInt(i, ((NI) 1), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_6)) { raiseOverflow(); goto BeforeRet_;};			i = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_6);
#line 83 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(83, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");			if (nimAddInt(j, ((NI) 1), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_7)) { raiseOverflow(); goto BeforeRet_;};			j = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_7);		}
	} LA1: ;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 48 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(NI, nimCStrLen)(NCSTRING a) {	NI result;	size_t T1_;	result = (NI)0;
#line 50 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 50 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 50 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	T1_ = (size_t)0;	T1_ = strlen(a);	result = ((NI) (T1_));	return result;}

#line 187 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/comparisons.nim"
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y) {	NIM_BOOL result;	nimfr_("<%", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/comparisons"
".nim");	result = (NIM_BOOL)0;
#line 188 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/comparisons.nim"
	nimln_(188, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/comparisons"
".nim");
#line 190 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/comparisons.nim"
	nimln_(190, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/comparisons"
".nim");	result = ((NU32)(((NU) (x))) < (NU32)(((NU) (y))));	popFrame();	return result;}

#line 45 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, csuEndsWith)(NCSTRING s, NCSTRING suffix) {	NIM_BOOL result;	NI slen;	NI i;	NI j;	NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_8;	nimfr_("endsWith", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");{	result = (NIM_BOOL)0;
#line 52 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(52, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");
#line 52 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	slen = (s ? nimCStrLen(s) : 0);
#line 53 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(53, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");	i = ((NI) 0);
#line 54 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(54, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");
#line 54 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 54 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	if (nimSubInt(slen, (suffix ? nimCStrLen(suffix) : 0), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_8)) { raiseOverflow(); goto BeforeRet_;};	j = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_8);	{
#line 55 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		nimln_(55, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");		while (1) {			NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_9;			NIM_BOOL T3_;			NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_11;
#line 55 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 55 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			if (nimAddInt(i, j, &TM__is8NdSOqVDyl9a9bWX7JQtCQ_9)) { raiseOverflow(); goto BeforeRet_;};
#line 55 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			T3_ = (NIM_BOOL)0;			T3_ = ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem((NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_9), slen);			if (!T3_) goto LA2;

#line 56 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(56, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");			{				NI TM__is8NdSOqVDyl9a9bWX7JQtCQ_10;
#line 56 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 56 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 56 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				if (nimAddInt(i, j, &TM__is8NdSOqVDyl9a9bWX7JQtCQ_10)) { raiseOverflow(); goto BeforeRet_;};				if (!!(((NU8)(s[(NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_10)]) == (NU8)(suffix[i])))) goto LA6_;

#line 56 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 56 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
				result = NIM_FALSE;				goto BeforeRet_;
			}
			LA6_: ;

#line 57 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
			nimln_(57, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");			if (nimAddInt(i, ((NI) 1), &TM__is8NdSOqVDyl9a9bWX7JQtCQ_11)) { raiseOverflow(); goto BeforeRet_;};			i = (NI)(TM__is8NdSOqVDyl9a9bWX7JQtCQ_11);		} LA2: ;
	}

#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
	nimln_(58, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim");	{
#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		if (!((NU8)(suffix[i]) == (NU8)(0))) goto LA10_;

#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"

#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/cstrutils.nim"
		result = NIM_TRUE;		goto BeforeRet_;
	}
	LA10_: ;
	}BeforeRet_: ;
	popFrame();	return result;}
