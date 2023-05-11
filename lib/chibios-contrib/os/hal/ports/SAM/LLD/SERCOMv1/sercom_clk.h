#ifndef SERCOM_CLK_H_
#define SERCOM_CLK_H_
#if defined(SAM_SERCOM0_GCLK_SRC_ID)
#if SAM_SERCOM0_GCLK_SRC_ID == 0
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK0_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK0_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 1
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK1_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK1_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 2
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK2_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK2_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 3
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK3_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK3_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 4
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK4_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK4_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 5
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK5_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK5_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 6
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK6_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK6_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 7
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK7_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK7_FREQ
#elif SAM_SERCOM0_GCLK_SRC_ID == 8
#define SAM_SERCOM0_GCLK_GENDIV SAM_GCLK8_GENDIV
#define SAM_SERCOM0_GCLK_SRC_FREQ SAM_GCLK8_FREQ
#endif
#endif

#if defined(SAM_SERCOM1_GCLK_SRC_ID)
#if SAM_SERCOM1_GCLK_SRC_ID == 0
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK0_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK0_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 1
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK1_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK1_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 2
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK2_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK2_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 3
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK3_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK3_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 4
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK4_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK4_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 5
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK5_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK5_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 6
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK6_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK6_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 7
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK7_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK7_SRC_FREQ
#elif SAM_SERCOM1_GCLK_SRC_ID == 8
#define SAM_SERCOM1_GCLK_GENDIV SAM_GCLK8_GENDIV
#define SAM_SERCOM1_GCLK_SRC_FREQ SAM_GCLK8_SRC_FREQ
#endif
#endif

#if defined(SAM_SERCOM2_GCLK_SRC_ID)
#if SAM_SERCOM2_GCLK_SRC_ID == 0
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK0_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK0_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 1
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK1_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK1_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 2
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK2_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK2_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 3
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK3_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK3_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 4
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK4_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK4_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 5
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK5_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK5_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 6
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK6_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK6_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 7
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK7_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK7_SRC_FREQ
#elif SAM_SERCOM2_GCLK_SRC_ID == 8
#define SAM_SERCOM2_GCLK_GENDIV SAM_GCLK8_GENDIV
#define SAM_SERCOM2_GCLK_SRC_FREQ SAM_GCLK8_SRC_FREQ
#endif
#endif


#if defined(SAM_SERCOM3_GCLK_SRC_ID)
#if SAM_SERCOM3_GCLK_SRC_ID == 0
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK0_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK0_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 1
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK1_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK1_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 2
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK2_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK2_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 3
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK3_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK3_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 4
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK4_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK4_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 5
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK5_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK5_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 6
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK6_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK6_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 7
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK7_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK7_SRC_FREQ
#elif SAM_SERCOM3_GCLK_SRC_ID == 8
#define SAM_SERCOM3_GCLK_GENDIV SAM_GCLK8_GENDIV
#define SAM_SERCOM3_GCLK_SRC_FREQ SAM_GCLK8_SRC_FREQ
#endif
#endif

#if defined(SAM_SERCOM4_GCLK_SRC_ID)
#if SAM_SERCOM4_GCLK_SRC_ID == 0
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK0_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK0_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 1
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK1_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK1_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 2
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK2_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK2_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 3
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK3_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK3_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 4
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK4_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK4_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 5
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK5_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK5_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 6
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK6_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK6_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 7
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK7_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK7_SRC_FREQ
#elif SAM_SERCOM4_GCLK_SRC_ID == 8
#define SAM_SERCOM4_GCLK_GENDIV SAM_GCLK8_GENDIV
#define SAM_SERCOM4_GCLK_SRC_FREQ SAM_GCLK8_SRC_FREQ
#endif
#endif

#if defined(SAM_SERCOM5_GCLK_SRC_ID)
#if SAM_SERCOM5_GCLK_SRC_ID == 0
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK0_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK0_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 1
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK1_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK1_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 2
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK2_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK2_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 3
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK3_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK3_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 4
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK4_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK4_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 5
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK5_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK5_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 6
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK6_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK6_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 7
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK7_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK7_SRC_FREQ
#elif SAM_SERCOM5_GCLK_SRC_ID == 8
#define SAM_SERCOM5_GCLK_GENDIV SAM_GCLK8_GENDIV
#define SAM_SERCOM5_GCLK_SRC_FREQ SAM_GCLK8_SRC_FREQ
#endif
#endif


#endif