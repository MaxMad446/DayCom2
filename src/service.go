package main

// Auto-generated | 2026-05-11T21:53:39.602623
import "fmt"

func Process_868() int {
    base := 412
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
