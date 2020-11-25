package main

// Auto-generated | 2026-05-11T19:52:52.106420
import "fmt"

func Process_726() int {
    base := 109
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
