package main

// Auto-generated | 2026-05-12T21:19:41.737923
import "fmt"

func Process_954() int {
    base := 19
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_954())
}
