package main

// Auto-generated | 2026-05-12T21:02:10.489581
import "fmt"

func Process_893() int {
    base := 317
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
