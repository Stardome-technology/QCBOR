#ifndef QCBOR_CONFIG_H
#define QCBOR_CONFIG_H

/* Disable float hardware — not needed for Stardome CBOR, saves ~2 KB code */
#define QCBOR_DISABLE_FLOAT_HW_USE
#define QCBOR_DISABLE_PREFERRED_FLOAT

/* Disable indefinite-length strings — not used in Stardome scheme */
#define QCBOR_DISABLE_INDEFINITE_LENGTH_STRINGS

#endif /* QCBOR_CONFIG_H */
