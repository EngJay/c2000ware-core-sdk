let DMA_Trigger = [
	{ name: "DMA_TRIGGER_SOFTWARE", displayName: "TRIGGER SOFTWARE" },
	{ name: "DMA_TRIGGER_ADCA1", displayName: "TRIGGER ADCA1" },
	{ name: "DMA_TRIGGER_ADCA2", displayName: "TRIGGER ADCA2" },
	{ name: "DMA_TRIGGER_ADCA3", displayName: "TRIGGER ADCA3" },
	{ name: "DMA_TRIGGER_ADCA4", displayName: "TRIGGER ADCA4" },
	{ name: "DMA_TRIGGER_ADCAEVT", displayName: "TRIGGER ADCAEVT" },
	{ name: "DMA_TRIGGER_ADCB1", displayName: "TRIGGER ADCB1" },
	{ name: "DMA_TRIGGER_ADCB2", displayName: "TRIGGER ADCB2" },
	{ name: "DMA_TRIGGER_ADCB3", displayName: "TRIGGER ADCB3" },
	{ name: "DMA_TRIGGER_ADCB4", displayName: "TRIGGER ADCB4" },
	{ name: "DMA_TRIGGER_ADCBEVT", displayName: "TRIGGER ADCBEVT" },
	{ name: "DMA_TRIGGER_ADCC1", displayName: "TRIGGER ADCC1" },
	{ name: "DMA_TRIGGER_ADCC2", displayName: "TRIGGER ADCC2" },
	{ name: "DMA_TRIGGER_ADCC3", displayName: "TRIGGER ADCC3" },
	{ name: "DMA_TRIGGER_ADCC4", displayName: "TRIGGER ADCC4" },
	{ name: "DMA_TRIGGER_ADCCEVT", displayName: "TRIGGER ADCCEVT" },
	{ name: "DMA_TRIGGER_CLA1", displayName: "TRIGGER CLA1" },
	{ name: "DMA_TRIGGER_CLA2", displayName: "TRIGGER CLA2" },
	{ name: "DMA_TRIGGER_CLA3", displayName: "TRIGGER CLA3" },
	{ name: "DMA_TRIGGER_CLA4", displayName: "TRIGGER CLA4" },
	{ name: "DMA_TRIGGER_CLA5", displayName: "TRIGGER CLA5" },
	{ name: "DMA_TRIGGER_CLA6", displayName: "TRIGGER CLA6" },
	{ name: "DMA_TRIGGER_CLA7", displayName: "TRIGGER CLA7" },
	{ name: "DMA_TRIGGER_CLA8", displayName: "TRIGGER CLA8" },
	{ name: "DMA_TRIGGER_XINT1", displayName: "TRIGGER XINT1" },
	{ name: "DMA_TRIGGER_XINT2", displayName: "TRIGGER XINT2" },
	{ name: "DMA_TRIGGER_XINT3", displayName: "TRIGGER XINT3" },
	{ name: "DMA_TRIGGER_XINT4", displayName: "TRIGGER XINT4" },
	{ name: "DMA_TRIGGER_XINT5", displayName: "TRIGGER XINT5" },
	{ name: "DMA_TRIGGER_EPWM1SOCA", displayName: "TRIGGER EPWM1SOCA" },
	{ name: "DMA_TRIGGER_EPWM1SOCB", displayName: "TRIGGER EPWM1SOCB" },
	{ name: "DMA_TRIGGER_EPWM2SOCA", displayName: "TRIGGER EPWM2SOCA" },
	{ name: "DMA_TRIGGER_EPWM2SOCB", displayName: "TRIGGER EPWM2SOCB" },
	{ name: "DMA_TRIGGER_EPWM3SOCA", displayName: "TRIGGER EPWM3SOCA" },
	{ name: "DMA_TRIGGER_EPWM3SOCB", displayName: "TRIGGER EPWM3SOCB" },
	{ name: "DMA_TRIGGER_EPWM4SOCA", displayName: "TRIGGER EPWM4SOCA" },
	{ name: "DMA_TRIGGER_EPWM4SOCB", displayName: "TRIGGER EPWM4SOCB" },
	{ name: "DMA_TRIGGER_EPWM5SOCA", displayName: "TRIGGER EPWM5SOCA" },
	{ name: "DMA_TRIGGER_EPWM5SOCB", displayName: "TRIGGER EPWM5SOCB" },
	{ name: "DMA_TRIGGER_EPWM6SOCA", displayName: "TRIGGER EPWM6SOCA" },
	{ name: "DMA_TRIGGER_EPWM6SOCB", displayName: "TRIGGER EPWM6SOCB" },
	{ name: "DMA_TRIGGER_EPWM7SOCA", displayName: "TRIGGER EPWM7SOCA" },
	{ name: "DMA_TRIGGER_EPWM7SOCB", displayName: "TRIGGER EPWM7SOCB" },
	{ name: "DMA_TRIGGER_EPWM8SOCA", displayName: "TRIGGER EPWM8SOCA" },
	{ name: "DMA_TRIGGER_EPWM8SOCB", displayName: "TRIGGER EPWM8SOCB" },
	{ name: "DMA_TRIGGER_EPWM9SOCA", displayName: "TRIGGER EPWM9SOCA" },
	{ name: "DMA_TRIGGER_EPWM9SOCB", displayName: "TRIGGER EPWM9SOCB" },
	{ name: "DMA_TRIGGER_EPWM10SOCA", displayName: "TRIGGER EPWM10SOCA" },
	{ name: "DMA_TRIGGER_EPWM10SOCB", displayName: "TRIGGER EPWM10SOCB" },
	{ name: "DMA_TRIGGER_EPWM11SOCA", displayName: "TRIGGER EPWM11SOCA" },
	{ name: "DMA_TRIGGER_EPWM11SOCB", displayName: "TRIGGER EPWM11SOCB" },
	{ name: "DMA_TRIGGER_EPWM12SOCA", displayName: "TRIGGER EPWM12SOCA" },
	{ name: "DMA_TRIGGER_EPWM12SOCB", displayName: "TRIGGER EPWM12SOCB" },
	{ name: "DMA_TRIGGER_EPWM13SOCA", displayName: "TRIGGER EPWM13SOCA" },
	{ name: "DMA_TRIGGER_EPWM13SOCB", displayName: "TRIGGER EPWM13SOCB" },
	{ name: "DMA_TRIGGER_EPWM14SOCA", displayName: "TRIGGER EPWM14SOCA" },
	{ name: "DMA_TRIGGER_EPWM14SOCB", displayName: "TRIGGER EPWM14SOCB" },
	{ name: "DMA_TRIGGER_EPWM15SOCA", displayName: "TRIGGER EPWM15SOCA" },
	{ name: "DMA_TRIGGER_EPWM15SOCB", displayName: "TRIGGER EPWM15SOCB" },
	{ name: "DMA_TRIGGER_EPWM16SOCA", displayName: "TRIGGER EPWM16SOCA" },
	{ name: "DMA_TRIGGER_EPWM16SOCB", displayName: "TRIGGER EPWM16SOCB" },
	{ name: "DMA_TRIGGER_TINT0", displayName: "TRIGGER TINT0" },
	{ name: "DMA_TRIGGER_TINT1", displayName: "TRIGGER TINT1" },
	{ name: "DMA_TRIGGER_TINT2", displayName: "TRIGGER TINT2" },
	{ name: "DMA_TRIGGER_EPWM17SOCA", displayName: "TRIGGER EPWM17SOCA" },
	{ name: "DMA_TRIGGER_EPWM17SOCB", displayName: "TRIGGER EPWM17SOCB" },
	{ name: "DMA_TRIGGER_EPWM18SOCA", displayName: "TRIGGER EPWM18SOCA" },
	{ name: "DMA_TRIGGER_EPWM18SOCB", displayName: "TRIGGER EPWM18SOCB" },
	{ name: "DMA_TRIGGER_ECAP1", displayName: "TRIGGER ECAP1" },
	{ name: "DMA_TRIGGER_ECAP2", displayName: "TRIGGER ECAP2" },
	{ name: "DMA_TRIGGER_ECAP3", displayName: "TRIGGER ECAP3" },
	{ name: "DMA_TRIGGER_ECAP4", displayName: "TRIGGER ECAP4" },
	{ name: "DMA_TRIGGER_ECAP5", displayName: "TRIGGER ECAP5" },
	{ name: "DMA_TRIGGER_ECAP6", displayName: "TRIGGER ECAP6" },
	{ name: "DMA_TRIGGER_ECAP7", displayName: "TRIGGER ECAP7" },
	{ name: "DMA_TRIGGER_LINATX", displayName: "TRIGGER LINATX" },
	{ name: "DMA_TRIGGER_LINARX", displayName: "TRIGGER LINARX" },
	{ name: "DMA_TRIGGER_LINBTX", displayName: "TRIGGER LINBTX" },
	{ name: "DMA_TRIGGER_LINBRX", displayName: "TRIGGER LINBRX" },
	{ name: "DMA_TRIGGER_SYNC", displayName: "TRIGGER SYNC" },
	{ name: "DMA_TRIGGER_SPIATX", displayName: "TRIGGER SPIATX" },
	{ name: "DMA_TRIGGER_SPIARX", displayName: "TRIGGER SPIARX" },
	{ name: "DMA_TRIGGER_SPIBTX", displayName: "TRIGGER SPIBTX" },
	{ name: "DMA_TRIGGER_SPIBRX", displayName: "TRIGGER SPIBRX" },
	{ name: "DMA_TRIGGER_SPICTX", displayName: "TRIGGER SPICTX" },
	{ name: "DMA_TRIGGER_SPICRX", displayName: "TRIGGER SPICRX" },
	{ name: "DMA_TRIGGER_SPIDTX", displayName: "TRIGGER SPIDTX" },
	{ name: "DMA_TRIGGER_SPIDRX", displayName: "TRIGGER SPIDRX" },
	{ name: "DMA_TRIGGER_CLB5INT", displayName: "TRIGGER CLB5INT" },
	{ name: "DMA_TRIGGER_CLB6INT", displayName: "TRIGGER CLB6INT" },
	{ name: "DMA_TRIGGER_FSITXA", displayName: "TRIGGER FSITXA" },
	{ name: "DMA_TRIGGER_FSIA_DATA_TAG_MATCH", displayName: "TRIGGER FSIA DATA TAG MATCH" },
	{ name: "DMA_TRIGGER_FSIRXA", displayName: "TRIGGER FSIRXA" },
	{ name: "DMA_TRIGGER_FSIA_PING_TAG_MATCH", displayName: "TRIGGER FSIA PING TAG MATCH" },
	{ name: "DMA_TRIGGER_CLB1INT", displayName: "TRIGGER CLB1INT" },
	{ name: "DMA_TRIGGER_CLB2INT", displayName: "TRIGGER CLB2INT" },
	{ name: "DMA_TRIGGER_CLB3INT", displayName: "TRIGGER CLB3INT" },
	{ name: "DMA_TRIGGER_CLB4INT", displayName: "TRIGGER CLB4INT" },
	{ name: "DMA_TRIGGER_USBA_RX1", displayName: "TRIGGER USBA RX1" },
	{ name: "DMA_TRIGGER_USBA_TX1", displayName: "TRIGGER USBA TX1" },
	{ name: "DMA_TRIGGER_USBA_RX2", displayName: "TRIGGER USBA RX2" },
	{ name: "DMA_TRIGGER_USBA_TX2", displayName: "TRIGGER USBA TX2" },
	{ name: "DMA_TRIGGER_USBA_RX3", displayName: "TRIGGER USBA RX3" },
	{ name: "DMA_TRIGGER_USBA_TX3", displayName: "TRIGGER USBA TX3" },
	{ name: "DMA_TRIGGER_FSIRXC", displayName: "TRIGGER FSIRXC" },
	{ name: "DMA_TRIGGER_FSIRXD", displayName: "TRIGGER FSIRXD" },
	{ name: "DMA_TRIGGER_FSIB_DATA_TAG_MATCH", displayName: "TRIGGER FSIB DATA TAG MATCH" },
	{ name: "DMA_TRIGGER_FSIB_PING_TAG_MATCH", displayName: "TRIGGER FSIB PING TAG MATCH" },
	{ name: "DMA_TRIGGER_FSIC_DATA_TAG_MATCH", displayName: "TRIGGER FSIC DATA TAG MATCH" },
	{ name: "DMA_TRIGGER_FSIC_PING_TAG_MATCH", displayName: "TRIGGER FSIC PING TAG MATCH" },
	{ name: "DMA_TRIGGER_FSID_DATA_TAG_MATCH", displayName: "TRIGGER FSID DATA TAG MATCH" },
	{ name: "DMA_TRIGGER_FSID_PING_TAG_MATCH", displayName: "TRIGGER FSID PING TAG MATCH" },
	{ name: "DMA_TRIGGER_FSITXB", displayName: "TRIGGER FSITXB" },
	{ name: "DMA_TRIGGER_FSIRXB", displayName: "TRIGGER FSIRXB" },
	{ name: "DMA_TRIGGER_UARTARX", displayName: "TRIGGER UARTARX" },
	{ name: "DMA_TRIGGER_UARTATX", displayName: "TRIGGER UARTATX" },
	{ name: "DMA_TRIGGER_UARTBRX", displayName: "TRIGGER UARTBRX" },
	{ name: "DMA_TRIGGER_UARTBTX", displayName: "TRIGGER UARTBTX" },
	{ name: "DMA_TRIGGER_CANAIF1", displayName: "TRIGGER CANAIF1" },
	{ name: "DMA_TRIGGER_CANAIF2", displayName: "TRIGGER CANAIF2" },
	{ name: "DMA_TRIGGER_CANAIF3", displayName: "TRIGGER CANAIF3" },
	{ name: "DMA_TRIGGER_AESA_CONTEXTIN", displayName: "TRIGGER AESA CONTEXTIN" },
	{ name: "DMA_TRIGGER_AESA_DATAIN", displayName: "TRIGGER AESA DATAIN" },
	{ name: "DMA_TRIGGER_AESA_CONTEXTOUT", displayName: "TRIGGER AESA CONTEXTOUT" },
	{ name: "DMA_TRIGGER_AESA_DATAOUT", displayName: "TRIGGER AESA DATAOUT" },
	{ name: "DMA_TRIGGER_EPG1", displayName: "TRIGGER EPG1" },
	{ name: "DMA_TRIGGER_SDFM1FLT1", displayName: "TRIGGER SDFM1FLT1" },
	{ name: "DMA_TRIGGER_SDFM1FLT2", displayName: "TRIGGER SDFM1FLT2" },
	{ name: "DMA_TRIGGER_SDFM1FLT3", displayName: "TRIGGER SDFM1FLT3" },
	{ name: "DMA_TRIGGER_SDFM1FLT4", displayName: "TRIGGER SDFM1FLT4" },
	{ name: "DMA_TRIGGER_SDFM2FLT1", displayName: "TRIGGER SDFM2FLT1" },
	{ name: "DMA_TRIGGER_SDFM2FLT2", displayName: "TRIGGER SDFM2FLT2" },
	{ name: "DMA_TRIGGER_SDFM2FLT3", displayName: "TRIGGER SDFM2FLT3" },
	{ name: "DMA_TRIGGER_SDFM2FLT4", displayName: "TRIGGER SDFM2FLT4" },
	{ name: "DMA_TRIGGER_SDFM3FLT1", displayName: "TRIGGER SDFM3FLT1" },
	{ name: "DMA_TRIGGER_SDFM3FLT2", displayName: "TRIGGER SDFM3FLT2" },
	{ name: "DMA_TRIGGER_SDFM3FLT3", displayName: "TRIGGER SDFM3FLT3" },
	{ name: "DMA_TRIGGER_SDFM3FLT4", displayName: "TRIGGER SDFM3FLT4" },
	{ name: "DMA_TRIGGER_SDFM4FLT1", displayName: "TRIGGER SDFM4FLT1" },
	{ name: "DMA_TRIGGER_SDFM4FLT2", displayName: "TRIGGER SDFM4FLT2" },
	{ name: "DMA_TRIGGER_SDFM4FLT3", displayName: "TRIGGER SDFM4FLT3" },
	{ name: "DMA_TRIGGER_SDFM4FLT4", displayName: "TRIGGER SDFM4FLT4" },
]
let DMA_InterruptMode = [
	{ name: "DMA_INT_AT_BEGINNING", displayName: "DMA interrupt is generated at the beginning of a transfer" },
	{ name: "DMA_INT_AT_END", displayName: "DMA interrupt is generated at the end of a transfer" },
]
let DMA_EmulationMode = [
	{ name: "DMA_EMULATION_STOP", displayName: "Transmission stops after current read-write access is completed" },
	{ name: "DMA_EMULATION_FREE_RUN", displayName: "Continue DMA operation regardless of emulation suspend" },
]
let DMA_CFG = [
	{ name: "DMA_CFG_ONESHOT_DISABLE", displayName: "Only one burst transfer performed per trigger." },
	{ name: "DMA_CFG_ONESHOT_ENABLE", displayName: "Burst transfers occur without additional event triggers after the first." },
	{ name: "DMA_CFG_CONTINUOUS_DISABLE", displayName: "DMA channel will be disabled at the end of a transfer." },
	{ name: "DMA_CFG_CONTINUOUS_ENABLE", displayName: "DMA reinitializes when the transfer count is zero and waits for a trigger." },
	{ name: "DMA_CFG_SIZE_16BIT", displayName: "DMA transfers 16 bits at a time." },
	{ name: "DMA_CFG_SIZE_32BIT", displayName: "DMA transfers 32 bits at a time." },
]
module.exports = {
	DMA_Trigger: DMA_Trigger,
	DMA_InterruptMode: DMA_InterruptMode,
	DMA_EmulationMode: DMA_EmulationMode,
	DMA_CFG: DMA_CFG,
}
