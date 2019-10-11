/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "ReferenceFrame.h"

static int memb_referenceFN_constraint_1(asn_TYPE_descriptor_t *td,
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

static int memb_referenceFNMSB_constraint_1(
    asn_TYPE_descriptor_t *td, const void *sptr,
    asn_app_constraint_failed_f *ctfailcb, void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 63))
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

static asn_per_constraints_t ASN_PER_MEMB_REFERENCE_FN_CONSTR_2 = {
    {APC_CONSTRAINED, 16, 16, 0, 65535} /* (0..65535) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REFERENCE_FNMSB_CONSTR_3 = {
    {APC_CONSTRAINED, 6, 6, 0, 63} /* (0..63) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ReferenceFrame_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct ReferenceFrame, referenceFN),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_referenceFN_constraint_1,
        &ASN_PER_MEMB_REFERENCE_FN_CONSTR_2, 0, "referenceFN"},
    {ATF_POINTER, 1, offsetof(struct ReferenceFrame, referenceFNMSB),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_referenceFNMSB_constraint_1,
        &ASN_PER_MEMB_REFERENCE_FNMSB_CONSTR_3, 0, "referenceFNMSB"},
};
static int asn_MAP_ReferenceFrame_oms_1[] = {1};
static ber_tlv_tag_t asn_DEF_ReferenceFrame_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_ReferenceFrame_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* referenceFN at 1438 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* referenceFNMSB at 1440 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReferenceFrame_specs_1 = {
    sizeof(struct ReferenceFrame),
    offsetof(struct ReferenceFrame, _asn_ctx),
    asn_MAP_ReferenceFrame_tag2el_1,
    2,                            /* Count of tags in the map */
    asn_MAP_ReferenceFrame_oms_1, /* Optional members */
    1,
    0,  /* Root/Additions */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceFrame = {
    "ReferenceFrame",
    "ReferenceFrame",
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
    asn_DEF_ReferenceFrame_tags_1,
    sizeof(asn_DEF_ReferenceFrame_tags_1) /
        sizeof(asn_DEF_ReferenceFrame_tags_1[0]), /* 1 */
    asn_DEF_ReferenceFrame_tags_1,                /* Same as above */
    sizeof(asn_DEF_ReferenceFrame_tags_1) /
        sizeof(asn_DEF_ReferenceFrame_tags_1[0]), /* 1 */
    0,                                            /* No PER visible constraints */
    asn_MBR_ReferenceFrame_1,
    2,                              /* Elements count */
    &asn_SPC_ReferenceFrame_specs_1 /* Additional specs */
};
