#ifndef GRAPH_NODE_CONSTRUCT_H_
#define GRAPH_NODE_CONSTRUCT_H_

#include "BaseAnimationNode.h"

namespace demo
{

	class IGraphNodeConstruct
	{
	public:
		virtual ~IGraphNodeConstruct() { }
		virtual BaseAnimationNode* create(const std::string& _name) = 0;
	};

	template <typename Type>
	class GraphNodeConstruct :
		public IGraphNodeConstruct
	{
	public:
		virtual BaseAnimationNode* create(const std::string& _name)
		{
			return new Type(_name);
		}
	};

}

#endif // GRAPH_NODE_CONSTRUCT_H_
