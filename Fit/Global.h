#ifndef _GLOBAL_H_
#define _GLOBAL_H_


#include <iostream>
#include <string>
#include <stdlib.h>
#include <glm/glm.hpp>
#include <vector>
#include <time.h>
#include <float.h>
#include <GL/glew.h>
#include <algorithm>

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat4;
using glm::mat3;

#ifndef LOBE_NUM
#define LOBE_NUM 4
#endif

#ifndef BAND_NUM
#define BAND_NUM 6
#endif

#ifndef SQRT_SAMPLES_NUM
#define SQRT_SAMPLES_NUM 100
#endif

#ifndef DIR_NUM
#define DIR_NUM 40
#endif

#ifndef BOUNCE_NUM
#define BOUNCE_NUM 3
#endif

#ifndef POINT_SIZE
#define POINT_SIZE 4.0
#endif

#define INDEX(l, m) (l * (l + 1) + m)

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//0�ͻ����ԭʼ�������źţ�1�ͻ����SH��ϵĽ����2�ͻ����LOBE_NUM��lobe���SHȻ����ϵĽ��
#define FIT_SHOW 2


//set data type
//#define IADOUBLE

#ifdef IADOUBLE
typedef double LFLOAT;
#else
typedef float LFLOAT;
#endif


#endif