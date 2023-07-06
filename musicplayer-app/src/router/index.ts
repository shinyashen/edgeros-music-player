import { createRouter, createWebHashHistory, RouteRecordRaw } from 'vue-router'
import Play from '../views/Play.vue'
import Home from '../views/Home.vue'

const routes = [
  {
    path: '/',
    redirect: '/home'
  },
  {
    path: '/home',
    component: Home
  },
  {
    path: '/play',
    component: Play
  }
]

const router = createRouter({
  history: createWebHashHistory(),
  routes
})

export default router
