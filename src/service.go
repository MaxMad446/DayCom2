package main

// Auto-generated | 2026-05-11T22:47:42.539946
import "fmt"

func Process_321() int {
    base := 305
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
