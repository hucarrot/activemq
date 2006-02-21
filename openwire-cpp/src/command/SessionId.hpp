/*
 * Copyright 2006 The Apache Software Foundation or its licensors, as
 * applicable.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef SessionId_hpp_
#define SessionId_hpp_

#include <string>
#include "command/AbstractCommand.hpp"
#include "util/ifr/p"

namespace apache
{
  namespace activemq
  {
    namespace client
    {
      namespace command
      {
        using namespace ifr;
        using namespace std;

/*
 * Dummy, should be auto-generated.
 */
class SessionId : public AbstractCommand
{
private:
    p<string> connectionId ;
    long      sessionId ;

    const static int TYPE = 121 ;

public:
    SessionId() ;
    virtual ~SessionId() ;

    virtual int getCommandType() ;
    virtual void setValue(long id) ;
    virtual long getValue() ;
    virtual void setConnectionId(const char* cid) ;
    virtual p<string> getConnectionId() ;
} ;

/* namespace */
      }
    }
  }
}

#endif /*SessionId_hpp_*/
