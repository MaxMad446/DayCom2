package main

// Auto-generated | 2026-05-12T03:50:57.780898
import "fmt"

func Process_726() int {
    base := 14
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
