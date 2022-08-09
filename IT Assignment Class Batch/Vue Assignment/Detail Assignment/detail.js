const app = Vue.createApp({
  data() {
      return {
          students: [
              {name: 'Mg Mg', age: 17, gender: 'male'},
              {name: 'Ma Ma', age: 18, gender: 'female'},
              {name: 'Kaung Kaung', age: 19, gender: 'male'},
          ]
      }
  },
  methods: {
    detail(index){
          index--;
          alert(`My name is ${this.students[index].name} and I'm ${this.students[index].age} years old.`);
      }
  }
});