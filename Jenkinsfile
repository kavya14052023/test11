pipeline {
    agent any
    stages {

        stage ('BUILD') {
            steps {
                echo "this is build stage"
                sh 'sleep 2'

            }
        }

        stage ('TEST PARALLEL') {
            parallel {
                stage ('TEST ON BRAVE') {
                    steps {
                        echo "this test 01"
                        sh 'ps -ef'
                    }
                }

                stage ('TEST ON MOZILLA') {
                    steps {
                        echo "this is test 02"
                        sh 'sleep 5'
                    }
                }

                stage ('TEST ON FIREFOX') {
                    steps {
                        echo "this is test 03"
                        sh 'sleep 2'
                    }
                }
            }
        }

        stage ('DEPLOY') {
            steps {
                echo "this is deploy stage"
                sh 'sleep 2'
            }
        }
    }   
}
            
