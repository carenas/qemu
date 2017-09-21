#define TARGET_SOL_SOCKET                       0xffff

#define TARGET_SO_DEBUG                         0x0001
#define TARGET_SO_REUSEADDR                     0x0004
#define TARGET_SO_KEEPALIVE                     0x0008
#define TARGET_SO_DONTROUTE                     0x0010
#define TARGET_SO_BROADCAST                     0x0020
#define TARGET_SO_LINGER                        0x0080
#define TARGET_SO_OOBINLINE                     0x0100
#define TARGET_SO_REUSEPORT                     0x0200
#define TARGET_SO_SNDBUF                        0x1001
#define TARGET_SO_RCVBUF                        0x1002
#define TARGET_SO_SNDBUFFORCE                   0x100a
#define TARGET_SO_RCVBUFFORCE                   0x100b
#define TARGET_SO_SNDLOWAT                      0x1003
#define TARGET_SO_RCVLOWAT                      0x1004
#define TARGET_SO_SNDTIMEO                      0x1005
#define TARGET_SO_RCVTIMEO                      0x1006
#define TARGET_SO_ERROR                         0x1007
#define TARGET_SO_TYPE                          0x1008
#define TARGET_SO_PROTOCOL                      0x1028
#define TARGET_SO_DOMAIN                        0x1029
#define TARGET_SO_PEERNAME                      0x2000
#define TARGET_SO_NO_CHECK                      0x400b
#define TARGET_SO_PRIORITY                      0x400c
#define TARGET_SO_BSDCOMPAT                     0x400e
#define TARGET_SO_PASSCRED                      0x4010
#define TARGET_SO_PEERCRED                      0x4011
#define TARGET_SO_TIMESTAMP                     0x4012
#define TARGET_SCM_TIMESTAMP                    TARGET_SO_TIMESTAMP
#define TARGET_SO_TIMESTAMPNS                   0x4013
#define TARGET_SCM_TIMESTAMPNS                  TARGET_SO_TIMESTAMPNS

#define TARGET_SO_SECURITY_AUTHENTICATION       0x4016
#define TARGET_SO_SECURITY_ENCRYPTION_TRANSPORT 0x4017
#define TARGET_SO_SECURITY_ENCRYPTION_NETWORK   0x4018

#define TARGET_SO_BINDTODEVICE                  0x4019
#define TARGET_SO_ATTACH_FILTER                 0x401a
#define TARGET_SO_DETACH_FILTER                 0x401b
#define TARGET_SO_GET_FILTER                    TARGET_SO_ATTACH_FILTER
#define TARGET_SO_ACCEPTCONN                    0x401c
#define TARGET_SO_PEERSEC                       0x401d
#define TARGET_SO_PASSSEC                       0x401e
#define TARGET_SO_MARK                          0x401f
#define TARGET_SO_TIMESTAMPING                  0x4020
#define TARGET_SCM_TIMESTAMPING                 TARGET_SO_TIMESTAMPING
#define TARGET_SO_RXQ_OVFL                      0x4021
#define TARGET_SO_WIFI_STATUS                   0x4022
#define TARGET_SCM_WIFI_STATUS                  TARGET_SO_WIFI_STATUS
#define TARGET_SO_PEEK_OFF                      0x4023
#define TARGET_SO_NOFCS                         0x4024
#define TARGET_SO_LOCK_FILTER                   0x4025
#define TARGET_SO_SELECT_ERR_QUEUE              0x4026
#define TARGET_SO_BUSY_POLL                     0x4027
#define TARGET_SO_MAX_PACING_RATE               0x4028
#define TARGET_SO_BPF_EXTENSIONS                0x4029
#define TARGET_SO_INCOMING_CPU                  0x402A
#define TARGET_SO_ATTACH_BPF                    0x402B
#define TARGET_SO_DETACH_BPF                    TARGET_SO_DETACH_FILTER

#define TARGET_SO_ATTACH_REUSEPORT_CBPF         0x402C
#define TARGET_SO_ATTACH_REUSEPORT_EBPF         0x402D

#define TARGET_SO_CNX_ADVICE                    0x402E
#define TARGET_SCM_TIMESTAMPING_OPT_STATS       0x402F
#define TARGET_SO_MEMINFO                       0x4030
#define TARGET_SO_INCOMING_NAPI_ID              0x4031
#define TARGET_SO_COOKIE                        0x4032
#define TARGET_SCM_TIMESTAMPING_PKTINFO         0x4033
#define TARGET_SO_PEERGROUPS                    0x4034
#define TARGET_SO_ZEROCOPY                      0x4035

/** sock_type - Socket types - default values
 *
 * @SOCK_STREAM - stream (connection) socket
 * @SOCK_DGRAM - datagram (conn.less) socket
 * @SOCK_RAW - raw socket
 * @SOCK_RDM - reliably-delivered message
 * @SOCK_SEQPACKET - sequential packet socket
 * @SOCK_DCCP - Datagram Congestion Control Protocol socket
 * @SOCK_PACKET - linux specific way of getting packets at the dev level.
 *                For writing rarp and other similar things on the user
 *                level.
 * @SOCK_CLOEXEC - sets the close-on-exec (FD_CLOEXEC) flag.
 * @SOCK_NONBLOCK - sets the O_NONBLOCK file status flag.
 */
enum sock_type {
    TARGET_SOCK_STREAM    = 1,
    TARGET_SOCK_DGRAM     = 2,
    TARGET_SOCK_RAW       = 3,
    TARGET_SOCK_RDM       = 4,
    TARGET_SOCK_SEQPACKET = 5,
    TARGET_SOCK_DCCP      = 6,
    TARGET_SOCK_PACKET    = 10,
    TARGET_SOCK_CLOEXEC   = 010000000,
    TARGET_SOCK_NONBLOCK  = 0x40000000,
};

#define TARGET_SOCK_MAX (TARGET_SOCK_PACKET + 1)
#define TARGET_SOCK_TYPE_MASK 0xf  /* Covers up to TARGET_SOCK_MAX - 1. */

#define ARCH_HAS_SOCKET_TYPES 1
