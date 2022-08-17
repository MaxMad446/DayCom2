package main

// Auto-generated | 2026-05-11T21:15:23.653174
import "fmt"

func Process_296() int {
    base := 179
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_296())
}
