#ifndef _ROS_naoqi_bridge_msgs_BodyROI_h
#define _ROS_naoqi_bridge_msgs_BodyROI_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace naoqi_bridge_msgs
{

  class BodyROI : public ros::Msg
  {
    public:
      float angle;
      float cx;
      float cy;
      float height;
      float width;
      float confidence;

    BodyROI():
      angle(0),
      cx(0),
      cy(0),
      height(0),
      width(0),
      confidence(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_angle;
      u_angle.real = this->angle;
      *(outbuffer + offset + 0) = (u_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle);
      union {
        float real;
        uint32_t base;
      } u_cx;
      u_cx.real = this->cx;
      *(outbuffer + offset + 0) = (u_cx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cx.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cx);
      union {
        float real;
        uint32_t base;
      } u_cy;
      u_cy.real = this->cy;
      *(outbuffer + offset + 0) = (u_cy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cy);
      union {
        float real;
        uint32_t base;
      } u_height;
      u_height.real = this->height;
      *(outbuffer + offset + 0) = (u_height.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_height.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_height.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_height.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->height);
      union {
        float real;
        uint32_t base;
      } u_width;
      u_width.real = this->width;
      *(outbuffer + offset + 0) = (u_width.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_width.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_width.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_width.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->width);
      union {
        float real;
        uint32_t base;
      } u_confidence;
      u_confidence.real = this->confidence;
      *(outbuffer + offset + 0) = (u_confidence.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_confidence.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_confidence.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_confidence.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->confidence);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_angle;
      u_angle.base = 0;
      u_angle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle = u_angle.real;
      offset += sizeof(this->angle);
      union {
        float real;
        uint32_t base;
      } u_cx;
      u_cx.base = 0;
      u_cx.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cx.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cx.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cx.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cx = u_cx.real;
      offset += sizeof(this->cx);
      union {
        float real;
        uint32_t base;
      } u_cy;
      u_cy.base = 0;
      u_cy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cy = u_cy.real;
      offset += sizeof(this->cy);
      union {
        float real;
        uint32_t base;
      } u_height;
      u_height.base = 0;
      u_height.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_height.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_height.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_height.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->height = u_height.real;
      offset += sizeof(this->height);
      union {
        float real;
        uint32_t base;
      } u_width;
      u_width.base = 0;
      u_width.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_width.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_width.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_width.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->width = u_width.real;
      offset += sizeof(this->width);
      union {
        float real;
        uint32_t base;
      } u_confidence;
      u_confidence.base = 0;
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->confidence = u_confidence.real;
      offset += sizeof(this->confidence);
     return offset;
    }

    const char * getType(){ return "naoqi_bridge_msgs/BodyROI"; };
    const char * getMD5(){ return "a9f6bf2f53b2585ecc0ff57bd4a21df4"; };

  };

}
#endif