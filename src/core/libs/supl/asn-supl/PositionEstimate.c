/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "../supl-common.asn"
 */

#include "PositionEstimate.h"

static int latitudeSign_2_constraint(asn_TYPE_descriptor_t *td,
    const void *sptr,
    asn_app_constraint_failed_f *ctfailcb,
    void *app_key)
{
    /* Replace with underlying type checker */
    td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
    return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void latitudeSign_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td)
{
    td->free_struct = asn_DEF_ENUMERATED.free_struct;
    td->print_struct = asn_DEF_ENUMERATED.print_struct;
    td->ber_decoder = asn_DEF_ENUMERATED.ber_decoder;
    td->der_encoder = asn_DEF_ENUMERATED.der_encoder;
    td->xer_decoder = asn_DEF_ENUMERATED.xer_decoder;
    td->xer_encoder = asn_DEF_ENUMERATED.xer_encoder;
    td->uper_decoder = asn_DEF_ENUMERATED.uper_decoder;
    td->uper_encoder = asn_DEF_ENUMERATED.uper_encoder;
    if (!td->per_constraints)
        td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
    td->elements = asn_DEF_ENUMERATED.elements;
    td->elements_count = asn_DEF_ENUMERATED.elements_count;
    /* td->specifics      = asn_DEF_ENUMERATED.specifics;    // Defined
     * explicitly
     */
}

static void latitudeSign_2_free(asn_TYPE_descriptor_t *td, void *struct_ptr,
    int contents_only)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    td->free_struct(td, struct_ptr, contents_only);
}

static int latitudeSign_2_print(asn_TYPE_descriptor_t *td,
    const void *struct_ptr, int ilevel,
    asn_app_consume_bytes_f *cb, void *app_key)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t latitudeSign_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx,
    asn_TYPE_descriptor_t *td,
    void **structure,
    const void *bufptr, size_t size,
    int tag_mode)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size,
        tag_mode);
}

static asn_enc_rval_t latitudeSign_2_encode_der(asn_TYPE_descriptor_t *td,
    void *structure, int tag_mode,
    ber_tlv_tag_t tag,
    asn_app_consume_bytes_f *cb,
    void *app_key)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t latitudeSign_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx,
    asn_TYPE_descriptor_t *td,
    void **structure,
    const char *opt_mname,
    const void *bufptr, size_t size)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr,
        size);
}

static asn_enc_rval_t latitudeSign_2_encode_xer(asn_TYPE_descriptor_t *td,
    void *structure, int ilevel,
    enum xer_encoder_flags_e flags,
    asn_app_consume_bytes_f *cb,
    void *app_key)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t latitudeSign_2_decode_uper(
    asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
    asn_per_constraints_t *constraints, void **structure,
    asn_per_data_t *per_data)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->uper_decoder(opt_codec_ctx, td, constraints, structure,
        per_data);
}

static asn_enc_rval_t latitudeSign_2_encode_uper(
    asn_TYPE_descriptor_t *td, asn_per_constraints_t *constraints,
    void *structure, asn_per_outp_t *per_out)
{
    latitudeSign_2_inherit_TYPE_descriptor(td);
    return td->uper_encoder(td, constraints, structure, per_out);
}

static int memb_uncertaintySemiMajor_constraint_7(
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

    if ((value >= 0 && value <= 127))
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

static int memb_uncertaintySemiMinor_constraint_7(
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

    if ((value >= 0 && value <= 127))
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

static int memb_orientationMajorAxis_constraint_7(
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

    if ((value >= 0 && value <= 180))
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

static int memb_latitude_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= 0 && value <= 8388607))
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

static int memb_longitude_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= -8388608 && value <= 8388607))
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

static int memb_confidence_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= 0 && value <= 100))
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

static asn_per_constraints_t ASN_PER_TYPE_LATITUDE_SIGN_CONSTR_2 = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_UNCERTAINTY_SEMI_MAJOR_CONSTR_8 = {
    {APC_CONSTRAINED, 7, 7, 0, 127} /* (0..127) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_UNCERTAINTY_SEMI_MINOR_CONSTR_9 = {
    {APC_CONSTRAINED, 7, 7, 0, 127} /* (0..127) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_ORIENTATION_MAJOR_AXIS_CONSTR_10 = {
    {APC_CONSTRAINED, 8, 8, 0, 180} /* (0..180) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_LATITUDE_CONSTR_5 = {
    {APC_CONSTRAINED, 23, -1, 0, 8388607} /* (0..8388607) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_LONGITUDE_CONSTR_6 = {
    {APC_CONSTRAINED, 24, -1, -8388608, 8388607} /* (-8388608..8388607) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_CONFIDENCE_CONSTR_11 = {
    {APC_CONSTRAINED, 7, 7, 0, 100} /* (0..100) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_latitudeSign_value2enum_2[] = {
    {0, 5, "north"}, {1, 5, "south"}};
static unsigned int asn_MAP_latitudeSign_enum2value_2[] = {
    0, /* north(0) */
    1  /* south(1) */
};
static asn_INTEGER_specifics_t asn_SPC_latitudeSign_specs_2 = {
    asn_MAP_latitudeSign_value2enum_2, /* "tag" => N; sorted by tag */
    asn_MAP_latitudeSign_enum2value_2, /* N => "tag"; sorted by N */
    2,                                 /* Number of elements in the maps */
    0,                                 /* Enumeration is not extensible */
    1,                                 /* Strict enumeration */
    0,                                 /* Native long size */
    0};
static ber_tlv_tag_t asn_DEF_latitudeSign_tags_2[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_latitudeSign_2 = {
        "latitudeSign",
        "latitudeSign",
        latitudeSign_2_free,
        latitudeSign_2_print,
        latitudeSign_2_constraint,
        latitudeSign_2_decode_ber,
        latitudeSign_2_encode_der,
        latitudeSign_2_decode_xer,
        latitudeSign_2_encode_xer,
        latitudeSign_2_decode_uper,
        latitudeSign_2_encode_uper,
        0, /* Use generic outmost tag fetcher */
        asn_DEF_latitudeSign_tags_2,
        sizeof(asn_DEF_latitudeSign_tags_2) /
                sizeof(asn_DEF_latitudeSign_tags_2[0]) -
            1,                       /* 1 */
        asn_DEF_latitudeSign_tags_2, /* Same as above */
        sizeof(asn_DEF_latitudeSign_tags_2) /
            sizeof(asn_DEF_latitudeSign_tags_2[0]), /* 2 */
        &ASN_PER_TYPE_LATITUDE_SIGN_CONSTR_2,
        0,
        0,                            /* Defined elsewhere */
        &asn_SPC_latitudeSign_specs_2 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uncertainty_7[] = {
    {ATF_NOFLAGS, 0, offsetof(struct uncertainty, uncertaintySemiMajor),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_uncertaintySemiMajor_constraint_7,
        &ASN_PER_MEMB_UNCERTAINTY_SEMI_MAJOR_CONSTR_8, 0, "uncertaintySemiMajor"},
    {ATF_NOFLAGS, 0, offsetof(struct uncertainty, uncertaintySemiMinor),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_uncertaintySemiMinor_constraint_7,
        &ASN_PER_MEMB_UNCERTAINTY_SEMI_MINOR_CONSTR_9, 0, "uncertaintySemiMinor"},
    {ATF_NOFLAGS, 0, offsetof(struct uncertainty, orientationMajorAxis),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_orientationMajorAxis_constraint_7,
        &ASN_PER_MEMB_ORIENTATION_MAJOR_AXIS_CONSTR_10, 0, "orientationMajorAxis"},
};
static ber_tlv_tag_t asn_DEF_uncertainty_tags_7[] = {
    (ASN_TAG_CLASS_CONTEXT | (3 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_uncertainty_tag2el_7[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
        0}, /* uncertaintySemiMajor at 77 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
        0}, /* uncertaintySemiMinor at 78 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
        0} /* orientationMajorAxis at 79 */
};
static asn_SEQUENCE_specifics_t asn_SPC_uncertainty_specs_7 = {
    sizeof(struct uncertainty),
    offsetof(struct uncertainty, _asn_ctx),
    asn_MAP_uncertainty_tag2el_7,
    3, /* Count of tags in the map */
    0,
    0,
    0,  /* Optional elements (not needed) */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_uncertainty_7 = {
        "uncertainty",
        "uncertainty",
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
        asn_DEF_uncertainty_tags_7,
        sizeof(asn_DEF_uncertainty_tags_7) /
                sizeof(asn_DEF_uncertainty_tags_7[0]) -
            1,                      /* 1 */
        asn_DEF_uncertainty_tags_7, /* Same as above */
        sizeof(asn_DEF_uncertainty_tags_7) /
            sizeof(asn_DEF_uncertainty_tags_7[0]), /* 2 */
        0,                                         /* No PER visible constraints */
        asn_MBR_uncertainty_7,
        3,                           /* Elements count */
        &asn_SPC_uncertainty_specs_7 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PositionEstimate_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, latitudeSign),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_latitudeSign_2,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "latitudeSign"},
    {ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, latitude),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_latitude_constraint_1,
        &ASN_PER_MEMB_LATITUDE_CONSTR_5, 0, "latitude"},
    {ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, longitude),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_longitude_constraint_1,
        &ASN_PER_MEMB_LONGITUDE_CONSTR_6, 0, "longitude"},
    {ATF_POINTER, 3, offsetof(struct PositionEstimate, uncertainty),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, &asn_DEF_uncertainty_7,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "uncertainty"},
    {ATF_POINTER, 2, offsetof(struct PositionEstimate, confidence),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_confidence_constraint_1,
        &ASN_PER_MEMB_CONFIDENCE_CONSTR_11, 0, "confidence"},
    {ATF_POINTER, 1, offsetof(struct PositionEstimate, altitudeInfo),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_AltitudeInfo,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "altitudeInfo"},
};
static int asn_MAP_PositionEstimate_oms_1[] = {3, 4, 5};
static ber_tlv_tag_t asn_DEF_PositionEstimate_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_PositionEstimate_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* latitudeSign at 73 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* latitude at 74 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* longitude at 75 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* uncertainty at 77 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* confidence at 81 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}  /* altitudeInfo at 82 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PositionEstimate_specs_1 = {
    sizeof(struct PositionEstimate),
    offsetof(struct PositionEstimate, _asn_ctx),
    asn_MAP_PositionEstimate_tag2el_1,
    6,                              /* Count of tags in the map */
    asn_MAP_PositionEstimate_oms_1, /* Optional members */
    3,
    0, /* Root/Additions */
    5, /* Start extensions */
    7  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PositionEstimate = {
    "PositionEstimate",
    "PositionEstimate",
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
    asn_DEF_PositionEstimate_tags_1,
    sizeof(asn_DEF_PositionEstimate_tags_1) /
        sizeof(asn_DEF_PositionEstimate_tags_1[0]), /* 1 */
    asn_DEF_PositionEstimate_tags_1,                /* Same as above */
    sizeof(asn_DEF_PositionEstimate_tags_1) /
        sizeof(asn_DEF_PositionEstimate_tags_1[0]), /* 1 */
    0,                                              /* No PER visible constraints */
    asn_MBR_PositionEstimate_1,
    6,                                /* Elements count */
    &asn_SPC_PositionEstimate_specs_1 /* Additional specs */
};
