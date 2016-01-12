/*
 * Copyright (C) 2015 Zhang Rui <bbcallen@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * https://github.com/Bilibili/jni4android
 * This file is automatically generated by jni4android, do not modify.
 */


#include "PlaybackParams.h"

typedef struct J4AC_PlaybackParams {
    jclass id;

    jmethodID method_setSpeed;
} J4AC_PlaybackParams;
static J4AC_PlaybackParams class_J4AC_PlaybackParams;

jobject J4AC_PlaybackParams__setSpeed(JNIEnv *env, jobject thiz, jfloat speed)
{
    return (*env)->CallObjectMethod(env, thiz, class_J4AC_PlaybackParams.method_setSpeed, speed);
}

jobject J4AC_PlaybackParams__setSpeed__catchAll(JNIEnv *env, jobject thiz, jfloat speed)
{
    jobject ret_object = J4AC_PlaybackParams__setSpeed(env, thiz, speed);
    if (J4A_ExceptionCheck__catchAll(env) || !ret_object) {
        return NULL;
    }

    return ret_object;
}

jobject J4AC_PlaybackParams__setSpeed__asGlobalRef__catchAll(JNIEnv *env, jobject thiz, jfloat speed)
{
    jobject ret_object   = NULL;
    jobject local_object = J4AC_PlaybackParams__setSpeed__catchAll(env, thiz, speed);
    if (J4A_ExceptionCheck__catchAll(env) || !local_object) {
        ret_object = NULL;
        goto fail;
    }

    ret_object = J4A_NewGlobalRef__catchAll(env, local_object);
    if (!ret_object) {
        ret_object = NULL;
        goto fail;
    }

fail:
    J4A_DeleteLocalRef__p(env, &local_object);
    return ret_object;
}

int J4A_loadClass__J4AC_PlaybackParams(JNIEnv *env)
{
    int         ret                   = -1;
    const char *J4A_UNUSED(name)      = NULL;
    const char *J4A_UNUSED(sign)      = NULL;
    jclass      J4A_UNUSED(class_id)  = NULL;
    int         J4A_UNUSED(api_level) = 0;

    api_level = J4A_GetSystemAndroidApiLevel(env);

    if (api_level < 23) {
        ALOGW("J4ALoader: Ignore: '%s' need API %d\n", "android.media.PlaybackParams", api_level);
        goto ignore;
    }

    sign = "android/media/PlaybackParams";
    class_J4AC_PlaybackParams.id = J4A_FindClass__asGlobalRef__catchAll(env, sign);
    if (class_J4AC_PlaybackParams.id == NULL)
        goto fail;

    class_id = class_J4AC_PlaybackParams.id;
    name     = "setSpeed";
    sign     = "(F)Landroid/media/PlaybackParams;";
    class_J4AC_PlaybackParams.method_setSpeed = JJK_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_PlaybackParams.method_setSpeed == NULL)
        goto fail;

    ALOGD("J4ALoader: OK: '%s' loaded\n", "android.media.PlaybackParams");
ignore:
    ret = 0;
fail:
    return ret;
}
