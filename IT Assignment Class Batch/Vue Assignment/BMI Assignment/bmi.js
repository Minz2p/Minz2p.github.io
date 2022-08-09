const app = Vue.createApp({
    data() {
        return {
                feet : "",
                inches: "",
                pound:"",

        }
    },
        methods : {
            result() {
                 feet = this.feet;
                 inches = this.inches;
                 pound = this.pound;
                 height = (12*feet) + inches;
                 bmi = (703 * pound)/(height * height);
                if(bmi <= 18.5) {
                    // alert(`${bmi}! Under weight`);
                    Swal.fire({
                        title: `${bmi}! <h3 style="color:blue;"> Under weight<\h3>`,
                        icon: 'success',
                        showClass: {
                          popup: 'animate__animated animate__fadeInDown'
                        },
                        hideClass: {
                          popup: 'animate__animated animate__fadeOutUp'
                        }
                      })
                }
                else if(bmi >= 18.5 && bmi <= 24.9) {
                    // alert(`${bmi}! Normal weight`);
                    Swal.fire({
                        title: `${bmi}! <h3 style="color:green;"> Normal weight<\h3>`,
                        icon: 'success',
                        showClass: {
                          popup: 'animate__animated animate__fadeInDown'
                        },
                        hideClass: {
                          popup: 'animate__animated animate__fadeOutUp'
                        }
                      })
                }
                else if(bmi >= 25 && bmi <= 29.9) {
                    // alert(`${bmi}! Over weight`);
                    Swal.fire({
                        title: `${bmi}! <h3 style="color:orange;">Over weight<\h3>`,
                        icon: 'success',
                        showClass: {
                          popup: 'animate__animated animate__fadeInDown'
                        },
                        hideClass: {
                          popup: 'animate__animated animate__fadeOutUp'
                        }
                      })
                } else if(bmi >= 30) {
                    // alert(`${bmi}! Obesity`);
                    Swal.fire({
                        title: `${bmi}! <h3 style="color:red;">Obesity<\h3>`,
                        icon: 'success',
                        showClass: {
                          popup: 'animate__animated animate__fadeInDown'
                        },
                        hideClass: {
                          popup: 'animate__animated animate__fadeOutUp'
                        }
                      })
                }
            }
        }
    });