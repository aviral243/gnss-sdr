/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "GPS-MsrSetElement.h"

static int memb_refFrame_constraint_1(asn_TYPE_descriptor_t *td,
    const void *sptr,
    asn_app_constraint_failed_f *ctfailcb,
    void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 65535))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                td->name, __FILE__, __LINE__);
            return -1;
        }
}

static asn_per_constraints_t ASN_PER_MEMB_REF_FRAME_CONSTR_2 = {
    {APC_CONSTRAINED, 16, 16, 0, 65535} /* (0..65535) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GPS_MsrSetElement_1[] = {
    {ATF_POINTER, 1, offsetof(struct GPS_MsrSetElement, refFrame),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_refFrame_constraint_1,
        &ASN_PER_MEMB_REF_FRAME_CONSTR_2, 0, "refFrame"},
    {ATF_NOFLAGS, 0, offsetof(struct GPS_MsrSetElement, gpsTOW),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_GPSTOW24b, 0,                  /* Defer constraints checking to the member type */
        0,                                      /* No PER visible constraints */
        0, "gpsTOW"},
    {ATF_NOFLAGS, 0, offsetof(struct GPS_MsrSetElement, gps_msrList),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_SeqOfGPS_MsrElement,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "gps-msrList"},
};
static int asn_MAP_GPS_MsrSetElement_oms_1[] = {0};
static ber_tlv_tag_t asn_DEF_GPS_MsrSetElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_GPS_MsrSetElement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* refFrame at 450 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* gpsTOW at 451 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* gps-msrList at 457 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GPS_MsrSetElement_specs_1 = {
    sizeof(struct GPS_MsrSetElement),
    offsetof(struct GPS_MsrSetElement, _asn_ctx),
    asn_MAP_GPS_MsrSetElement_tag2el_1,
    3,                               /* Count of tags in the map */
    asn_MAP_GPS_MsrSetElement_oms_1, /* Optional members */
    1,
    0,  /* Root/Additions */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GPS_MsrSetElement = {
    "GPS-MsrSetElement",
    "GPS-MsrSetElement",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0, /* Use generic outmost tag fetcher */
    asn_DEF_GPS_MsrSetElement_tags_1,
    sizeof(asn_DEF_GPS_MsrSetElement_tags_1) /
        sizeof(asn_DEF_GPS_MsrSetElement_tags_1[0]), /* 1 */
    asn_DEF_GPS_MsrSetElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_GPS_MsrSetElement_tags_1) /
        sizeof(asn_DEF_GPS_MsrSetElement_tags_1[0]), /* 1 */
    0,                                               /* No PER visible constraints */
    asn_MBR_GPS_MsrSetElement_1,
    3,                                 /* Elements count */
    &asn_SPC_GPS_MsrSetElement_specs_1 /* Additional specs */
};
