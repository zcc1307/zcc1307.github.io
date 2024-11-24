---
layout: page
title: Research
permalink: /research
---

## Research

My research is on interactive machine learning (ML), where learning agents actively engage in data collection to make decisions or gain useful insights. Such interactive nature of learning processes enables learning agents to focus on collecting data from the relevant parts of the environment, thus allowing to save data collection effort (which oftentimes translates to onerous human labor or experimental cost). My reserach goal is to understand and establish principled ways to design interactive machine learning algorithms with efficiency guarantees (e.g. sample efficiency, computational efficiency), and evaluate them experimentally in simulated and real-world datasets and environments. Here are some research topics I have been working on: 

### Imitation Learning

Imitation learning (IL), or Learning from Demonstrations, models the setting where a learning agent learns from a demonstrating expert to obtain intelligent sequential decision making behavior. Compared with reinforcement learning, imitation learning has the advantages that: (1) it gets around the reward misspecification problem and (2) it can mitigate the challenge 
of exploration. Such paradigm has been successfully deployed in e.g. robotics and autonomous driving. My research in imitation learning ([LZ22](https://arxiv.org/abs/2209.12868), [LZ24](https://arxiv.org/abs/2312.16860)) has been focused on understanding the power of interactive expert demonstrations: if we have an expert that can provide real-time, interactive action demonstration (cf. offline IL with expert demonstration trajectories readily available), how can we best utilize it to save its effort?


### Exploration in Bandits and Reinforcement Learning Settings

A wide range of sequential decision making problems require learning agents to perform exploration to learn about relevant parts of the environment. E.g., a robot needs to traverse a part of the maze before it finds way to its goal; a product recommendation system might want to gather information about a user's interest by trying to suggest users products they may 
like and see their reactions. My research in this area has been on understanding how to perform efficient exploration in structured environments, e.g., in the presence of large action spaces ([KLSZ20](https://arxiv.org/abs/1902.01520), [MZCKLS20](https://arxiv.org/abs/2006.06040)), multi-task setting (e.g. [WZSRC20](https://arxiv.org/abs/2010.15390), [ZW21](https://arxiv.org/abs/2107.08622)), structured reward distributions ([QJZ23](https://arxiv.org/abs/2304.14989)), and environments with sparsity and low-rankness properties ([JZJ22](https://arxiv.org/abs/2210.15345), [JZJ24](https://arxiv.org/abs/2402.11156)). 

### Active Learning

Many modern ML pipelines are data-hungry; although in many applications of ML, unlabeled examples are abundant and easy to obtain, obtaining label annotations can be very time- and labor-consuming. Active learning aims at using interaction to reduce label annotation efforts: by adaptively making label queries to experts, the learning agent can avoid making queries for examples whose labels they are quite confident about. My research aims at designing ``theoretical'' algorithms for active learning with label requirements approaching fundamental information-theoretic limits, ensuring computational efficiency and noise tolerance ([ZL21](https://arxiv.org/abs/2102.05312), [ZSA20](https://arxiv.org/abs/2002.04840)), as well as more practical heuristics ([AZKLA20](https://arxiv.org/abs/1906.03671)). I am also interested in the interplay of active learning with other fields, such as uncertainty quantification ([ZC14](https://arxiv.org/abs/1407.2657)), fairness estimation ([YZ22](https://arxiv.org/abs/2206.08450)), and game-theory ([YZ24](https://openreview.net/forum?id=s5hSp7EdL3)). 


### Multi-task and Transfer Learning

Real-world learning agents are not just trained and tested on one task; they usually learn and act in many different tasks at the same time, borrowing the insights they learn from one task for better learning in other ones. This is especially relevant in the modern foundation model era, where the ``pretrain-then-finetune'' paradigm becomes standard. My research tries to quantify when and how one can utilize auxiliary source of data to provably benefit learning and decision making, including paradigms such as active learning ([ZC15](https://arxiv.org/abs/1510.02847)), contextual bandits ([ZADLN19](https://arxiv.org/abs/1901.00301)), meta-learning bandits ([DWZ24](https://openreview.net/forum?id=2kZMtdjzSV)).  


### Interdisciplinary Collaboration

Besides machine learning methodology research, I am also interested in working with domain experts in practical evaluation of developed methods. This includes the efforts of:  developing large-action-spaces bandit algorithms for tacking beam selection and path selection in wireless communication ([ZZL22](https://link.springer.com/chapter/10.1007/978-3-031-26412-2_17)); designing fairness aware bandits algorithms for network coexistence ([GZLK24](https://ieeexplore.ieee.org/abstract/document/10579843/)); interpretable classification for oracle cancer detection ([SZSK+23](https://www.mdpi.com/2072-6694/15/5/1421)). 
