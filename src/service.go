package main

// Auto-generated | 2026-05-12T03:42:41.018963
import "fmt"

func Process_471() int {
    base := 402
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_471())
}
