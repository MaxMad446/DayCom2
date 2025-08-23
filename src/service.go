package main

// Auto-generated | 2026-05-12T21:28:10.527379
import "fmt"

func Process_726() int {
    base := 221
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
