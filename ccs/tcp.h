/* Interface header for tcp.c */

/* Global Defines */

#define TCP_RX_DATA_LEN 200
#define TCP_PAYLOAD_LEN 200

/* Global Variables */

extern uint8_t tcp_rxdataLen;
extern uint8_t tcp_rxdata[TCP_RX_DATA_LEN];
extern uint8_t tcpPayloadLen;
extern uint8_t tcpPayload[TCP_PAYLOAD_LEN];

/* Global Functions */
#ifdef __cplusplus
extern "C" {
#endif

extern void tcp_Mainfunction(void);
extern void evaluateTcpPacket(void);
extern void tcp_Disconnect(void);
extern void tcp_transmit(void);

#ifdef __cplusplus
}
#endif
