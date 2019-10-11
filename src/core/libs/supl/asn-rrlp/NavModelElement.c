/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "NavModelElement.h"

static asn_TYPE_member_t asn_MBR_NavModelElement_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct NavModelElement, satelliteID),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_SatelliteID,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "satelliteID"},
    {ATF_NOFLAGS, 0, offsetof(struct NavModelElement, satStatus),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), +1, /* EXPLICIT tag at current level */
        &asn_DEF_SatStatus, 0,                  /* Defer constraints checking to the member type */
        0,                                      /* No PER visible constraints */
        0, "satStatus"},
};
static ber_tlv_tag_t asn_DEF_NavModelElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_NavModelElement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* satelliteID at 703 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* satStatus at 705 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NavModelElement_specs_1 = {
    sizeof(struct NavModelElement),
    offsetof(struct NavModelElement, _asn_ctx),
    asn_MAP_NavModelElement_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0,  /* Optional elements (not needed) */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NavModelElement = {
    "NavModelElement",
    "NavModelElement",
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
    asn_DEF_NavModelElement_tags_1,
    sizeof(asn_DEF_NavModelElement_tags_1) /
        sizeof(asn_DEF_NavModelElement_tags_1[0]), /* 1 */
    asn_DEF_NavModelElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_NavModelElement_tags_1) /
        sizeof(asn_DEF_NavModelElement_tags_1[0]), /* 1 */
    0,                                             /* No PER visible constraints */
    asn_MBR_NavModelElement_1,
    2,                               /* Elements count */
    &asn_SPC_NavModelElement_specs_1 /* Additional specs */
};
