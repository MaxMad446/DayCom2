package main

// Auto-generated | 2026-05-13T20:35:14.863561
import "fmt"

func Process_471() int {
    base := 151
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_471())
}
