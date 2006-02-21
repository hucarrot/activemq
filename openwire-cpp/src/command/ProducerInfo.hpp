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
#ifndef ProducerInfo_hpp_
#define ProducerInfo_hpp_

#include <string>
#include "IDestination.hpp"
#include "command/BaseCommand.hpp"
#include "command/ProducerId.hpp"
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
        using namespace apache::activemq::client;

/*
 * Dummy, should be auto-generated.
 */
class ProducerInfo : public BaseCommand
{
private:
    p<ProducerId> producerId ;
    p<IDestination> destination ;

public:
    const static int TYPE = 6 ;

public:
    ProducerInfo() ;
    virtual ~ProducerInfo() ;

    virtual p<ProducerId> getProducerId() ;
    virtual void setProducerId(p<ProducerId> producerId) ;
    virtual p<IDestination> getDestination() ;
    virtual void setDestination(p<IDestination> destination) ;
} ;

/* namespace */
      }
    }
  }
}

#endif /*ProducerInfo_hpp_*/
