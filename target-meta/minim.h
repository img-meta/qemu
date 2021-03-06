#ifndef __MINIM_H__
#define __MINIM_H__

typedef struct {
    uint16_t prefix;
    uint32_t core_mask;
    int se_msb;
    int se_bits;
    int se_bit;
    uint32_t core_val;
    uint32_t enc_core;
    uint32_t ext_mask;
    uint32_t ext_val;
    uint32_t enc_ext;

    int copy_bits;
    int copy_src;
    int copy_dst;

    /* Calculated */
    uint16_t dec_mask_core, dec_val_core;
    uint16_t dec_mask_ext, dec_val_ext;
    uint16_t dec_mask_long, dec_val_long;
} minim_insn_desc_t;

minim_insn_desc_t minim_table[] = {
    /* ADD */
    {0x0000, 0xFEC631FB, 0, 0, 0, 0x00000000, 0x0339CE04, 0xF6C00000,
        0x00000000, 0x0C0631FB, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x0000, 0xFEC7FF03, 18, 11, 1, 0x02000000, 0x033800FE, 0xF6C00000,
        0x02000000, 0x0C07FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x0000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339CE01, 0xF6060000,
        0x04000000, 0x0CC031FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x0000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339C1C1, 0xF6060000,
        0x06000000, 0x0CC03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SUB */
    {0x1000, 0xFEC631FB, 0, 0, 0, 0x10000000, 0x0339CE04, 0xF6C00000,
        0x10000000, 0x0C0631FB, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x1000, 0xFEC7FF03, 18, 11, 1, 0x12000000, 0x033800FE, 0xF6C00000,
        0x12000000, 0x0C07FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x1000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339CE01, 0xF6060000,
        0x14000000, 0x0CC031FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x1000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339C1C1, 0xF6060000,
        0x16000000, 0x0CC03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* AND */
    {0x2000, 0xFEC631FB, 0, 0, 0, 0x20000000, 0x0339CE04, 0xF6C00000,
        0x20000000, 0x0C0631FB, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x2000, 0xFEC7FF03, 18, 11, 1, 0x22000000, 0x033800FE, 0xF6C00000,
        0x22000000, 0x0C07FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x2000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339CE01, 0xF6060000,
        0x24000000, 0x0CC031FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x2000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339C1C1, 0xF6060000,
        0x26000000, 0x0CC03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* OR */
    {0x3000, 0xFEC631FB, 0, 0, 0, 0x30000000, 0x0339CE04, 0xF6C00000,
        0x30000000, 0x0C0631FB, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x3000, 0xFEC7FF03, 18, 11, 1, 0x32000000, 0x033800FE, 0xF6C00000,
        0x32000000, 0x0C07FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x3000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339CE01, 0xF6060000,
        0x34000000, 0x0CC031FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x3000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339C1C1, 0xF6060000,
        0x36000000, 0x0CC03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* XOR */
    {0x4000, 0xFEC631FB, 0, 0, 0, 0x40000000, 0x0339CE04, 0xF6C00000,
        0x40000000, 0x0C0631FB, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4000, 0xFEC7FF03, 18, 11, 1, 0x42000000, 0x033800FE, 0xF6C00000,
        0x42000000, 0x0C07FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339CE01, 0xF6060000,
        0x44000000, 0x0CC031FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339C1C1, 0xF6060000,
        0x46000000, 0x0CC03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},

    /* SHIFT De.r,Dx.r,De.r */
    {0x5000, 0xFEC7313F, 0, 0, 0, 0x50000000, 0x0338CEC0, 0xF6C00000,
        0x50000000, 0x0C07313F, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SHIFT De.r,Dx.r,#I5 */
    {0x5000, 0xFEC7C13F, 0, 0, 0, 0x52000000, 0x03383EC0, 0x00000000,
        0xFFFFFFFF, 0x00000000, 3, 19, 14, 0, 0, 0, 0, 0, 0},
    {0x5000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x03383EC0, 0xF6C00000,
        0x52000000, 0x0C07C13F, 0, 0, 0, 0, 0, 0, 0, 0, 0},

    /* SHIFT Rx.r,Dx.r,De.r */
    {0x5000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0338CEC0, 0xF6060020,
        0x54000020, 0x0CC1313F, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SHIFT Rx.r,Dx.r,#I5 */
    {0x5000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x03383EC0, 0xF6060020,
        0x56000020, 0x0CC1C13F, 0, 0, 0, 0, 0, 0, 0, 0, 0},

    /* SHIFTcc De.r,Dx.r,De.r */
    {0x5000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0338CEC0, 0xF6060020,
        0x54000000, 0x0CC1313F, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SHIFTcc De.r,Dx.r,#I5 */
    {0x5000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x03383EC0, 0xF6060020,
        0x56000000, 0x0CC1C13F, 0, 0, 0, 0, 0, 0, 0, 0, 0},

    /* MUL */
    {0x6000, 0xFEC631BF, 0, 0, 0, 0x60000000, 0x0339CE40, 0xFEC00000,
        0x60000000, 0x0C0631BF, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x6000, 0xFEC7FF03, 18, 11, 1, 0x62000000, 0x033800FE, 0xFEC00000,
        0x62000000, 0x0C07FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x6000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339CE01, 0xFE060000,
        0x64000000, 0x0CC031FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x6000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0339C1C1, 0xFE060000,
        0x66000000, 0x0CC03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CMP+TST */
    {0x7000, 0xF6FE01FE, 0, 0, 0, 0x70000000, 0x0B01FE01, 0xF6C001FE,
        0x70000000, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x7000, 0xF6C7FF07, 18, 11, 1, 0x72000000, 0x0B3800FA, 0xF6C00000,
        0x72000000, 0x0407FF05, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6060000,
        0x74000000, 0x04F801FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B19C1C1, 0xF6060000,
        0x76000000, 0x04E03E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* FFB */
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6C001FE,
        0x70000004, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* NORM */
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6C001FE,
        0x70000008, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MIN */
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6C001FE,
        0x70000020, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MAX */
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6C001FE,
        0x70000024, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* ABS */
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6C001FE,
        0x70000028, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* NRMIN */
    {0x7000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B01FE01, 0xF6C001FE,
        0x7000002C, 0x043E01FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* ADD Ax */
    {0x8000, 0xF6E319FB, 0, 0, 0, 0x80000000, 0x0B1CE604, 0xF6C00000,
        0x80000000, 0x042319FB, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x8000, 0xF6E7FF03, 18, 11, 1, 0x82000000, 0x0B1800FE, 0xF6600000,
        0x82000000, 0x0487FF01, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x8000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B1CE601, 0xF6C00000,
        0x84000000, 0x042319FE, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0x8000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0B1CC1C1, 0xF6C00000,
        0x86000000, 0x04233E3E, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* B */
    {0x9400, 0xFFFF801F, 23, 9, -1, 0xA0000000, 0x00007FE0, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* NOP */
    {0x9000, 0xFFFFFFFF, 0, 0, 0, 0xA0FFFFFE, 0x000003FF, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* Bcc */
    {0x9000, 0xFFFFFC01, 23, 14, -1, 0xA0000000, 0x000003FF, 0xFF000001,
        0xA0000000, 0x00FFFC00, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* BRcc */
    {0x9000, 0xFFFFFC01, 23, 14, -1, 0xA0000001, 0x000003FF, 0xFF000001,
        0xA0000001, 0x00FFFC00, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CALLR */
    {0x9800, 0xFFFF801F, 23, 9, -1, 0xAB000014, 0x00007FE0, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CALLR */
    {0x9800, 0x00000000, 23, 9, -1, 0xFFFFFFFF, 0x00007FE0, 0xFF000000,
        0xAB000000, 0x00FF801F, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV A0.x,D0.x */
    {0x9D00, 0xFFC73FFF, 0, 0, 0, 0xA3000460, 0x0038CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV A1.x,D0.x */
    {0x9D80, 0xFFC73FFF, 0, 0, 0, 0xA3000480, 0x0038CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV A0.x D1.x */
    {0x9D00, 0xFFC73FFF, 0, 0, 0, 0xA3000860, 0x0038CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV A1.x,D1.x */
    {0x9D80, 0xFFC73FFF, 0, 0, 0, 0xA3000880, 0x0038CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV D0.x,A0.x */
    {0x9D00, 0xFFE63FFF, 0, 0, 0, 0xA3000C20, 0x0019CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV D1.x,A0.x */
    {0x9D80, 0xFFE63FFF, 0, 0, 0, 0xA3000C40, 0x0019CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV D0.x,A1.x */
    {0x9D00, 0xFFE63FFF, 0, 0, 0, 0xA3001020, 0x0019CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV D1.x,A1.x */
    {0x9D80, 0xFFE63FFF, 0, 0, 0, 0xA3001040, 0x0019CC00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV D1.x,D0.x */
    {0x9E80, 0xFFC63FFF, 0, 0, 0, 0xA3000440, 0x0039C000, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV D0.x,D1.x */
    {0x9E40, 0xFFC63FFF, 0, 0, 0, 0xA3000820, 0x0039C000, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV A1.x,A0.x */
    {0x9E00, 0xFFE73FFF, 0, 0, 0, 0xA3000C80, 0x0018C840, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV A0.x,A1.x */
    {0x9E00, 0xFFE73FFF, 0, 0, 0, 0xA3001060, 0x0018C840, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV PC,D0.x */
    {0x9C00, 0xFFC7BFFF, 0, 0, 0, 0xA30004A0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV PC,D1.x */
    {0x9C00, 0xFFC7BFFF, 0, 0, 0, 0xA30008A0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV PC,A0.x */
    {0x9C00, 0xFFC7BFFF, 0, 0, 0, 0xA3000CA0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV PC,A1.x */
    {0x9C00, 0xFFC7BFFF, 0, 0, 0, 0xA30010A0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV Ud,Us */
    {0x9C80, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0018C000, 0xFF00021F,
        0xA3000000, 0x00E73DE0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWAP PC,D0.x */
    {0x9C40, 0xFFC7BFFF, 0, 0, 0, 0xA30006A0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWAP PC,D1.x */
    {0x9C40, 0xFFC7BFFF, 0, 0, 0, 0xA3000AA0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWAP PC,A0.x */
    {0x9C40, 0xFFC7BFFF, 0, 0, 0, 0xA3000EA0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWAP PC,A1.x */
    {0x9C40, 0xFFC7BFFF, 0, 0, 0, 0xA30012A0, 0x00384C00, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWAP Ud,Us */
    {0x9CC0, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0018C000, 0xFF00021F,
        0xA3000200, 0x00E73DE0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* RTH */
    {0x9CE0, 0xFFFFFFFF, 0, 0, 0, 0xA37FFFFF, 0x0018C000, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* RTI */
    {0x9CF0, 0xFFFFFFFF, 0, 0, 0, 0xA3FFFFFF, 0x0018C000, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* LOCK */
    {0x9CF0, 0xFFFFFFFC, 0, 0, 0, 0xA8000000, 0x00180003, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWITCH 0xfffffff */
    {0x9F00, 0xFFFFFFFF, 0, 0, 0, 0xAFFFFFFF, 0x00C3020E, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWITCH 0xc3063c */
    {0x9F00, 0xFF3CFDF1, 0, 0, 0, 0xAF000000, 0x00C3020E, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWITCH 0xff3fff */
    {0x9F00, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00C3020E, 0xFF00C000,
        0xAF000000, 0x003C3DF1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [A0+#n],D0.x */
    {0xA000, 0xFFC738FF, 13, 3, -1, 0xB6000062, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [A0+#n],D1.x */
    {0xA000, 0xFFC738FF, 13, 3, -1, 0xB6000064, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [A0+#n],A0.x */
    {0xA000, 0xFFC738FF, 13, 3, -1, 0xB6000066, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [A0+#n],A1.x */
    {0xA000, 0xFFC738FF, 13, 3, -1, 0xB6000068, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [base+#n] */
    {0xA000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0838C706, 0xFA860000,
        0xB2000000, 0x074138F9, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [base+Ro] */
    {0xA000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0838C166, 0xFA860100,
        0xB0000000, 0x07413E99, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MSET */
    {0xA000, 0xFFC73C67, 0, 0, 0, 0xB9000060, 0x0838C398, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MSET */
    {0xA000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0838C398, 0xFE860007,
        0xB8000000, 0x07413C67, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET D0.x,[A0+#n] */
    {0xA800, 0xFFC738FF, 13, 3, -1, 0xC6000062, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET D1.x,[A0+#n] */
    {0xA800, 0xFFC738FF, 13, 3, -1, 0xC6000064, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET A0.x,[A0+#n] */
    {0xA800, 0xFFC738FF, 13, 3, -1, 0xC6000066, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET A1.x,[A0+#n] */
    {0xA800, 0xFFC738FF, 13, 3, -1, 0xC6000068, 0x0838C706, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET [base+#n] */
    {0xA800, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0838C706, 0xFA860000,
        0xC2000000, 0x074138F9, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET [base+Ro] */
    {0xA800, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0838C166, 0xFA860100,
        0xC0000000, 0x07413E99, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MGET */
    {0xA800, 0xFFC73C67, 0, 0, 0, 0xC9000060, 0x0838C398, 0x00000000,
        0xFFFFFFFF, 0x00000000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MGET */
    {0xA800, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x0838C398, 0xFE860007,
        0xC8000000, 0x07413C67, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* JUMP */
    {0x0000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF000004,
        0xAC000000, 0x03FFC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CALL */
    {0x0000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF000004,
        0xAC000004, 0x03FFC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV+CPR */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF063C00,
        0xA1000000, 0x0FF9C000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOVL+CPRL */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF060181,
        0xA2000000, 0x0FF9C000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOVcc Ud,Us */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF840201,
        0xA3000000, 0x0F7BC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* KICK */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF843E01,
        0xA3000001, 0x0F7BC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SWAPcc Ud,Us */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF840201,
        0xA3000200, 0x0F7BC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SETXcc+CPRXcc */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF060180,
        0xA4000000, 0x0FF9C000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* SET [base+S12] */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFFC00000,
        0xA5000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* GET [base+S12] */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFFC00000,
        0xA7000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* MOV CT.?,#X16 */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFFC00004,
        0xA9000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* XSD(BW),RTDW */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF063FF0,
        0xAA000000, 0x0FF9C000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* XFR */
    {0x8000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xF0060000,
        0xD0000000, 0x0FF9C000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CPW */
    {0xC000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xF3C03FF8,
        0xE0000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CPW */
    {0xC000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xF3C00000,
        0xE2000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CPW */
    {0xC000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xF3C03FC0,
        0xE1000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CPX */
    {0xC000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFFC7FFD8,
        0xE1000040, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* CPW */
    {0xC000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xF3C7C000,
        0xE3000000, 0x0F3FC000, 0, 0, 0, 0, 0, 0, 0, 0, 0},

    /* DCACHE [BBa.r+#S6], BBx.r */
    {0x4000, 0x00000000, 0, 0, 0, 0xFFFFFFFF, 0x00003FFF, 0xFF060087,
        0xAD000000, 0x0FF9C000, 0, 0, 0, 0, 0, 0, 0, 0, 0},

    { 0xffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};

#endif /* __MINIM_H__ */

