---
layout: course_bootstrap
title: CSC 480/580 Spring 2024
permalink: /courses/csc480580sp24/schedule
---

<!--
<style>
    table {
        width: 100%;
    }
</style>
-->

### CSC 480/580: Principles of Machine Learning - Spring 2024

#### Tentative schedule

Please refer to this course's [Fall 2022 version](https://zcc1307.github.io/courses/csc580fa22/schedule.html) for a preview of the lecture slides. 

|  Date  | Topics | Notes | Readings  | Homework |
|:------:|:------------:|:---:|:---:|:---:|
| Jan 11 | Introduction, motivation, course mechanics |  | CIML Chap. 1 | [HW0](CSC_580_HW0.pdf) |
| Jan 16 | Supervised learning paradigm; decision trees |  | CIML Chap. 2 |  |
| Jan 18 | Finish decision trees; limits of learning; practical issues in supervised learning |  | CIML Chap. 3 | HW0 due |
| Jan 23 | Hyperparameter selection; cross-validation; nearest neighbors  |  | CIML Chap. 4 | [HW1](CSC_580_HW1.pdf) |
| Jan 25 | Labor day holiday |  |  |  |
| Jan 30 | Linear classifiers; Perceptron |   | CIML 5.1-5.6 |  |
| Feb 1  | Practical considerations: features; performance metric beyond error; ROC curves |  | CIML 5.7, 7.1-7.3 |  |
| Feb 6  | Precision-recall curves; confidence intervals and hypothesis testing |  | CIML 7.4-7.6 |  |
| Feb 8  | Finish hypothesis testing; Linear models for regression |  | CIML 7.7 |  |
| Feb 13 | Introduction to convex optimization; Linear models for classification |  | CIML 11.1-11.2 |  |
| Feb 15 | SVM; stochastic gradient descent; dual formulations |  | CIML 11.4, 11.5 |  |
| Feb 20 | Finish SVM dual formulation; geometric interpretation; begin kernel methods |  | CIML 3.4, 11.3 |  |
| Feb 22 | Finish kernel methods: kernel Perceptron; kernel ridge regression; begin unsupervised learning: clustering and k-means |  | CIML Chap 15 | [HW2](CSC_580_HW2.pdf) |
| Feb 27 | Class canceled (please review your HW1 & soln guide) |  | [My old notes on SVM and kernels](https://zcc1307.github.io/courses/csc665fa19/notes/svm.pdf);  |  |
| Feb 29 | Finish clustering; Principal component analysis (PCA) |  | CIML 9.1-9.3 |  |
| Mar 5  | Finish PCA; begin probabilistic graphical models |  | CIML 9.4-9.7 |  |
| Mar 7  | Finish Naive Bayes; Midterm review |  | CIML 16.1-16.2 |  |
| Mar 12 | Midterm exam |  |  |  |
| Mar 14 | Expectation-maximization and Gaussian mixture models (GMMs) |  | CIML 16.3 |  |
| Mar 19 | Finish GMM; A closer look at Bayes Nets and Conditional Independence |   | [Jason Pacheco's PGM note](https://www2.cs.arizona.edu/~pachecoj/courses/csc535_fall20/lectures/pgms.pdf) | Project proposal due |
| Mar 21 | d-separation; Begin HMMs: the forward algorithm |  | [Jason Pacheco's Dynamical Systems note](https://www2.cs.arizona.edu/~pachecoj/courses/csc535_fall20/lectures/dynamicalsys.pdf) |  |
| Mar 26 | Finish HMMs: Viterbi algorithm for decoding and EM algorithm for learning |  | CIML 10.1-10.2 | [HW3](CSC_580_HW3.pdf) |
| Mar 28 | Neural Networks; begin backpropagation |  | CIML 10.3-10.6 |  |
| Apr 2  | Finish backpropagation; tips for training neural networks |  | Berkeley CS 285 PyTorch tutorial (see links in slides) |  |
| Apr 4  | Convolutional neural networks (CNNs) |  | [Stanford CS 231n notes on CNNs](https://cs231n.github.io/convolutional-networks/) |  |
| Apr 9  | CNNs cont'd; begin generative models: autoencoders  |  |  |  |
| Apr 11 | Generative models: VAEs |  | [Jaan Altosaar's VAE tutorial](https://jaan.io/what-is-variational-autoencoder-vae-tutorial/) |  |
| Apr 16 | Generative models: GANs |   | [The original GAN paper](https://arxiv.org/pdf/1406.2661.pdf) | [HW4](CSC_580_HW4.pdf) |
| Apr 18 | Reinforcement learning: policy evaluation and planning in MDPs |  |  |  |
| Apr 23 | Reinforcement learning: learning in MDPs |  | [Andrej Karpathy's blogpost on Deep RL](http://karpathy.github.io/2016/05/31/rl/) |  |
| Apr 25 | Learning Theory: the PAC and agnostic PAC framework |  |  |  |
| Apr 30 | Learning theory: uniform convergence and structural risk minimization; Final review |  | [``Deep double descent'' paper by Nakkiran et al](https://openreview.net/forum?id=B1g5sA4twr) |  |


[//]: # (
| Jan 11 | Introduction, motivation, course mechanics | [slides](22_lec00_final.pdf) | CIML Chap. 1 | [HW0](CSC_580_HW0.pdf) |
| Jan 16 | Supervised learning paradigm; decision trees | [slides](22_lec01_final.pdf) | CIML Chap. 2 |  |
| Jan 18 | Finish decision trees; limits of learning; practical issues in supervised learning | [slides](22_lec02_final.pdf) | CIML Chap. 3 | HW0 due |
| Jan 23 | Hyperparameter selection; cross-validation; nearest neighbors  | [slides](22_lec03_final.pdf) | CIML Chap. 4 | [HW1](CSC_580_HW1.pdf) |
| Jan 25 | Labor day holiday |  |  |  |
| Jan 30 | Linear classifiers; Perceptron |  [slides](22_lec04_final.pdf) | CIML 5.1-5.6 |  |
| Feb 1  | Practical considerations: features; performance metric beyond error; ROC curves |  | CIML 5.7, 7.1-7.3 |  |
| Feb 6  | Precision-recall curves; confidence intervals and hypothesis testing | [slides](22_lec05_final.pdf) | CIML 7.4-7.6 |  |
| Feb 8  | Finish hypothesis testing; Linear models for regression | [slides](22_lec06_final.pdf) | CIML 7.7 |  |
| Feb 13 | Introduction to convex optimization; Linear models for classification |  | CIML 11.1-11.2 |  |
| Feb 15 | SVM; stochastic gradient descent; dual formulations | [slides](22_lec07_final.pdf) | CIML 11.4, 11.5 |  |
| Feb 20 | Finish SVM dual formulation; geometric interpretation; begin kernel methods | [slides](22_lec08_final.pdf) | CIML 3.4, 11.3 |  |
| Feb 22 | Finish kernel methods: kernel Perceptron; kernel ridge regression; begin unsupervised learning: clustering and k-means |  | CIML Chap 15 | [HW2](CSC_580_HW2.pdf) |
| Feb 27 | Class canceled (please review your HW1 & soln guide) |  | [My old notes on SVM and kernels](https://zcc1307.github.io/courses/csc665fa19/notes/svm.pdf);  |  |
| Feb 29 | Finish clustering; Principal component analysis (PCA) | [slides](22_lec09_final.pdf) | CIML 9.1-9.3 |  |
| Mar 5  | Finish PCA; begin probabilistic graphical models |  | CIML 9.4-9.7 |  |
| Mar 7  | Finish Naive Bayes; Midterm review | [slides](22_lec10_final.pdf) | CIML 16.1-16.2 |  |
| Mar 12 | Midterm exam |  |  |  |
| Mar 14 | Expectation-maximization and Gaussian mixture models (GMMs) | [slides](22_lec11_final.pdf) | CIML 16.3 |  |
| Mar 19 | Finish GMM; A closer look at Bayes Nets and Conditional Independence |   | [Jason Pacheco's PGM note](https://www2.cs.arizona.edu/~pachecoj/courses/csc535_fall20/lectures/pgms.pdf) | Project proposal due |
| Mar 21 | d-separation; Begin HMMs: the forward algorithm |  | [Jason Pacheco's Dynamical Systems note](https://www2.cs.arizona.edu/~pachecoj/courses/csc535_fall20/lectures/dynamicalsys.pdf) |  |
| Mar 26 | Finish HMMs: Viterbi algorithm for decoding and EM algorithm for learning | [slides](22_lec12_final.pdf) | CIML 10.1-10.2 | [HW3](CSC_580_HW3.pdf) |
| Mar 28 | Neural Networks; begin backpropagation |  | CIML 10.3-10.6 |  |
| Apr 2  | Finish backpropagation; tips for training neural networks | [slides](22_lec13_final.pdf) | Berkeley CS 285 PyTorch tutorial (see links in slides) |  |
| Apr 4  | Convolutional neural networks (CNNs) | [slides](22_lec14_final.pdf) | [Stanford CS 231n notes on CNNs](https://cs231n.github.io/convolutional-networks/) |  |
| Apr 9  | CNNs cont'd; begin generative models: autoencoders  |  |  |  |
| Apr 11 | Generative models: VAEs |  | [Jaan Altosaar's VAE tutorial](https://jaan.io/what-is-variational-autoencoder-vae-tutorial/) |  |
| Apr 16 | Generative models: GANs |  [slides](22_lec15_final.pdf) | [The original GAN paper](https://arxiv.org/pdf/1406.2661.pdf) | [HW4](CSC_580_HW4.pdf) |
| Apr 18 | Reinforcement learning: policy evaluation and planning in MDPs |  |  |  |
| Apr 23 | Reinforcement learning: learning in MDPs | [slides](22_lec16_final.pdf) | [Andrej Karpathy's blogpost on Deep RL](http://karpathy.github.io/2016/05/31/rl/) |  |
| Apr 25 | Learning Theory: the PAC and agnostic PAC framework |  |  |  |
| Apr 30 | Learning theory: uniform convergence and structural risk minimization; Final review | [slides](22_lec17_final.pdf) | [``Deep double descent'' paper by Nakkiran et al](https://openreview.net/forum?id=B1g5sA4twr) |  |
)