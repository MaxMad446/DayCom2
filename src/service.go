package main

// Auto-generated | 2026-05-14T06:18:43.905840
import "fmt"

func Process_741() int {
    base := 393
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_741())
}
