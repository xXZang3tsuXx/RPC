/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _POWER_H_RPCGEN
#define _POWER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int a;
	int b;
};
typedef struct numbers numbers;

#define POWER_PROG 0x23451111
#define POWER_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define power 1
extern  int * power_1(numbers *, CLIENT *);
extern  int * power_1_svc(numbers *, struct svc_req *);
extern int power_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define power 1
extern  int * power_1();
extern  int * power_1_svc();
extern int power_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_POWER_H_RPCGEN */
