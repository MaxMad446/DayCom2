package main

// Auto-generated | 2026-05-13T22:08:58.676870
import "fmt"

func Process_777() int {
    base := 387
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
